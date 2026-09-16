// Ghidra headless script: create functions at the reviewed starts, mark pools as data,
// analyze, and write one decompiled draft per function.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.data.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;

public class DraftExport extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        Path spec = Paths.get(args[0]);
        Path out = Paths.get(args[1]);
        Files.createDirectories(out);
        List<String> lines = Files.readAllLines(spec);
        for (String line : lines) {
            String[] f = line.trim().split("\\s+");
            if (f.length < 3) continue;
            Address a = toAddr(Long.parseLong(f[0].substring(2), 16));
            int size = Integer.parseInt(f[1]);
            if (f[2].equals("data")) {
                try { createData(a, new ArrayDataType(ByteDataType.dataType, size, 1)); } catch (Exception e) {}
            } else if (f[2].equals("function")) {
                disassemble(a);
                if (getFunctionAt(a) == null) createFunction(a, "func_" + f[0].substring(2));
            } else {
                disassemble(a);
            }
        }
        analyzeAll(currentProgram);
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int n = 0;
        try (PrintWriter index = new PrintWriter(out.resolve("index.txt").toFile())) {
            while (it.hasNext()) {
                Function fn = it.next();
                DecompileResults r = dec.decompileFunction(fn, 60, monitor);
                String c = (r != null && r.getDecompiledFunction() != null) ? r.getDecompiledFunction().getC() : "/* no decompilation */\n";
                String name = String.format("func_%08x", fn.getEntryPoint().getOffset());
                long end = fn.getBody().getMaxAddress().getOffset() + 1;
                Files.write(out.resolve(name + ".c"), ("/* " + name + " 0x" + String.format("%08x", fn.getEntryPoint().getOffset()) + "-0x" + String.format("%08x", end) + " Ghidra draft; not source */\n" + c).getBytes());
                index.println(String.format("%s 0x%08x %d", name, fn.getEntryPoint().getOffset(), end - fn.getEntryPoint().getOffset()));
                n++;
            }
        }
        dec.dispose();
        println("wrote " + n + " drafts");
    }
}
