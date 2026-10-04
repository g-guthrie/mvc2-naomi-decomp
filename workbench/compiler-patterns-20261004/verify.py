#!/usr/bin/env python3
"""Compatibility entry point for the checked compiler-pattern suite."""
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[2] / 'tools'))
from compiler_patterns import main
if __name__ == '__main__':
    main()
