# Self-hosted BrainFuck compiler
This self-hosted BrainFuck compiler is technically speaking a bf to C translator written entirely in BrainFuck itself. Despite this, with a bit of C compiler's help it can actually produce an executables out of raw brainfuck code.

Take a note: the bf code you plan to compile should have a blank line at the end of file, after that you can safely put any description of your program without a fear of leaving accidental comma or dot anywhere since that part wouldn't be compiled.

#### dependencies
gcc or any other C compiler

#### build
gcc bootstrapper.c -o bootstrapper && bootstrapper < brainfuck_compiler.bf > output.c && gcc output.c -o brainfuck_compiler

#### using
brainfuck_compiler < your_bf_code_filename.bf > output.c && gcc output.c -o compiled_program_filename