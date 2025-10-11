# CLI
- nm filename.o -> name list

## From C to Asm
- clang -arch arm64 -S filename.c -o filename.s -> translate from c to asm using clang.
- gcc -S filename.c -o filname.s -> translate from c to asm using gcc

## From Asm to Object
- clang -arch arm64 -c filename.s -o filename.o -> compile from asm to object using clang.
- gcc -c filename.s -o filename.o -> compile from asm to object file using gcc.

### Object file: All code that doesn't have dependency will compiled to binary, the dependency part will be remain for linker to solve the dependency.
- we can view dependency var by using **nm**

## Link process -> gcc also use similar syntax
### Link Object File:
- clang -arch arm64 filname.o dependency.o -o execute_name
### Link C File:
- clang -arch arm64 filename.c dependency.c -o execute_name

## Compiling Process
- Source -> `Preprocessor` -> *Preprocessed File (.i File)* -> `Compiler` -> *Assembly code (.s File)* -> `Assembler` -> *Object code (.o file)* -> `Linker` -> Executable
