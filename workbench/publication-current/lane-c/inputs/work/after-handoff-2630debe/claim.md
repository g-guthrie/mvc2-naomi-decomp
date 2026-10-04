Active research claim: whole 0x0c1c3568..0x0c1c36c8, three functions and 68 pool bytes. Eight-registry review has no ownership conflicts or crossing branches/literals. No registration or exact credit. Sealed handoff untouched.
Next whole section: 0x0c1c6df8..0x0c1c6f80, three functions and 66 pool bytes; prior eight-registry review clear; full native listing reviewed. No exact credit.
Active whole section 0x0c1b526c..0x0c1b5400: eight-registry refreshed review clear; native full section and predecessor pool read. Three complete functions; 60 pool bytes. No credit or registration.
Active whole 0x0c1b48fc..0x0c1b4b48, refreshed eight registries clear. Six functions including shared init/update fallthrough and two real terminal callbacks; two interior pools. Native all588 bytes read; no registration/credit.

Claim 0x0c1c3c00..0x0c1c3d88 (392 bytes): two complete procedures, first continues after its interior literal pool. Eight registries refreshed: no owners, no external code edges. Earlier incoming survey at 0x0c1c3984 decodes data as MOV.L; it is not a code edge. Only native fields 0x259, 0x329, unsigned flags0x414 added in private model, same layout. Zero exact credit until whole proof.

Claim 0x0c1cd7fc..0x0c1cd99c: 416-byte whole, four actual functions and 74-byte final literal pool. Fresh eight registries no owners. Two apparent incoming literal loads from d7f4/d7f8 are preceding pool data, confirmed native predecessor return at d7dc and pool through d7fc. Callback table entries d920/d99c/d9e2 reviewed. Zero credit pending whole proof.

Claim 0x0c1c409c..0x0c1c4294: 504-byte whole, nine actual entries including init fallthrough and two dispatchers; fresh eight registries clear, full raw native read, callback tables reviewed. Existing LinkedActor parameter words used; private model exposes real float100 and signed ActorFlags byte0x8b. Zero credit.

Claim 0x0c1c3d88..0x0c1c409c: all eight registries clear; native callback table proves entries 3d88,3f42,4074,4082. Init continues into update; no C for false continuation entries 3e60/3fc8. Whole C only, no registration until whole exact.

Claim 0c1c3854..0c1c3c00: 940 bytes, eight fresh registries clear, full native read; five actual entries 3854/38da/3912/3b60/3bb4, two internal pools plus final pool. Complete whole source next.

Claim 0c1c7194..7494 768 bytes: eight registry checks clear, full native read, real five entries7194/7278/7368/743c/7450; false7300 continuation omitted. Existing CharacterState selector52c and ActorFlags b41 suffice; no new shared model.

Claim 0c1d330c..35f4 744 bytes: all8registries clear; direct outgoing branches are calls to four real standalone constructors3172/2ff6/2e60/2c1c; read each argument prologue. True entries330c/357a, continuation3460/3510 not functions. Private model reveals signed effect counter119 only.

Claim0c1d501c..53e4 968bytes eight registryclear fullnative read, callbacktable261690 proves50be standalone and5066fallthrough; entries501c5032506650be510a5128513251e653ce. Renderer binding native read8ff8/901e/912a/917e, no newlayout.

Claim 0c1d6460..6810 944 bytes: fresh eight registry ownership clear, complete native review, nine true entries; callback table261700 proves6502 update, internal65d4/671c excluded. Reuse existing models only.

Claim0c1c2894..2a14 384bytes fresh8registries clear complete rawread; true5entries2894/28b0/292e/295a/2990; pool29d6..2a14; dispatchtablesce8c/ce9c are outgoing callback addresses external reviewed boundary.

Claim 0c1bd8d8..dc78 928 bytes: corrected survey start d8d0, native d8a6/d8c4 prove preceding literals d8d0/d8d4. Eight registries clear; true five entries d8d8/d914/d95e/d996/da82; table25beac confirms handlers. Internal da3c/da82 prologue split/db7c not new functions. Pools da16..da3c,db56..db7c,dc62..dc78. Existing LinkedActor model reused.

Claim0c1d6810..6c64 1108bytes fresh8clear/nativeallread true8entries6810/684a/68a2/692c/698a/6abe/6b86/6bcc. Native branch684a restoresframe then tails68a2; pool68f4..692c,6a1c..6a58,6b4e..6b7c,6c48..6c64. Math1ebc70 native FR4/FR5 reviewed. Private header reveals only native scalar control/camera fields.

Claim0c1d5530..5960 1072 bytes fresh8clear fullnative read; callbacktables2616a4/16b8 actual12entries5530/5546/557a/55d2/561e/563c/5646/56f6/58cc/58d0/58e2/591e; pools5676..56a0/57b0..57e8/5948..5960. Sibling1d501c reused only semantically overlapping code; actual angle44 parentdependent polarity, resourceindices25/29 and26/30, initialframe2, secondaryphase0/2 proven. Existingselectorreadonly.

Claim 0c1c1678..21d8 2912 bytes: eight registries clear; all native code and pools read. Eighteen real entries, internal direct calls contained. Four-float copies are table copies, not zeroing; native baseline y at108 preserved. No registration or canonical layout changes.

Claim 0c1dafa8..0c1dc044 (4252 bytes): eight registries clear, no mapped incoming/outgoing edges; full native body read. Six three-entry callback tables 262170..2621b8 prove initializer fallthrough entries. All direct calls contained; external parked callback1dae48 is only referenced. Native SDK transform/get/set prologues confirm vector and matrix arguments. Internal literal pools reviewed. Private scratch model exposes actual signed ints at d4/d8 and unsigned phase5; canonical source unchanged. Whole C follows before first proof; zero exact credit until full byte proof.

Fresh recovered-gap claim 0c1e8970..0c1e8b5c, 492 bytes. Prior fresh-pass exhaustion was reviewed-mapping-only, not a full lane result. This cluster lies in unmapped gap 1e896c..1e8b46, with three complete native entries1e8970/1e8a10/1e8ab0 and shared literal pool1e8b46..1e8b5c. Full native bodies/delay slots/read padding and pools read. Eight registries have no overlapping code owner, no mapped incoming or outgoing dependency. No prior C draft at this start. All external calls are reviewed pointer imports2082e0/208a20, not new out-of-lane work. A new native packet configuration object exposes actual32bit fields0..108,float112..140 and textureflags160; no existing shared object definition. Whole scratch source before proof; no mapping change, no forced alignment/padding, zero exact credit until proof.

Recovered-gap1e8970 first proof: terminal INEXACT, P0/492, linked472; firstentry146/160, otheraddresses shifted. Zeroexactcredit/unregistered. Whole candidate retained. No forced alignment/padding/register or permutation retries. Prior exhaustion claim corrected: reviewed mapping only, not full lane.

Recovered closure claim1e83a0..1e896c1484bytes: full native body/pools read; eight registries code-owner clear, no mapped incoming/outgoing edges. Initial proposal86e0 excluded actual readers8652/8690/8692; expanded85e0 exposed readers83ae onward; actual prologue83a0 closes both shared literal pools862a..8650 and893a..896c. Seven real entries83a0/8450/8500/85e0/86e0/87c0/88a0. Vertex emitters preserve untextured16byte/textured28byte input stride, native output32byte packet and final strip marker. Whole scratch source next; no mapping/register changes or out-of-lane decomp. External callee prologues9bd0/2081e0/208260 inspected to confirm arguments. Zero exactcredit before whole proof.

1e83a0 first whole proof terminal INEXACT: native1484 vslinked1400; P0/1484, laterexportaddresses shifted. ZEROcredit unregistered. New factualclosure/materialnative evidence, no failed permutation retries. 1e8970 and37functiondraft unchanged.

Material earliest-divergence review1e83a0: native frame saves count on stack, 36localbytes vscompiler32 and earlyregistercount-1. Reviewed full firstbody: call order/vertexfields/signedcountloop/finalemission preserved; no new semantic correction or compiler forcing applied. Next new4function group8b60/8ba0/8be0/8c20 fullnative268read: wrapper8c20 directly calls prior88a0, so entire dependency closure is83a0..8c6c2252bytes, including prior7fnand3fnunits. Eight registry checks clear; mappedincoming/outgoingnone forcombinedextent. Claim combined14function scratchC beforeproof; preserve original7fnand3fn sources and proofs. Pools862a..8650,893a..896c,8b46..8b5c,8c46..8c6c. New actual texturepointer108 stride60 and three192byte configuration slots; no mappingchange/artificialpadding/ABIforcing.
