# Description
A simple malloc library intended to be compiled to a shared library and used in LD_PRELOAD to print out information on each malloc call. The implementation is basic and not meant for large programs.

# Compilation and usage
Run `make` to compile and get a malloc.so file.
To try it, run `LD_PRELOAD=$PWD/malloc.so seq 1 5`.
