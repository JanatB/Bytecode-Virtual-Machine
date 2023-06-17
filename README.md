# Bytecode-Virtual-Machine

A Bytecode Virtual Machine (VM) written in `C`. To avoid the overhead of traversing an AST, a bytecode representation is introduced. The `scanner` outputs tokens which are later given as input to the `compiler` to genrate bytecode - similar to assembly code although magnitudes simpler with a limited set of instructions. The generated bytecode is later given as input to the `VM` that then executes and displays the output.   

## Challenges Completed
- [x] Chapter 14 - Chunks of Bytecode 
- [x] Chapter 15 - A Virtual Machine 
- [x] Chapter 16 - Scanning on Demand

All solutions can be found in the `./challenges` folder

## Potential Improvements to Solutions

- [ ] (Chp15/#4) - Look into ways to more accurately measure preformance. How is the memory/CPU affected? 
- [ ] (Chp16/#1) - Understand how [Wren](https://github.com/wren-lang/wren/tree/8fae8e4f1e490888e2cc9b2ea6b8e0d0ff9dd60f) and other languages interpret string interpolations. Maybe add support for it later on.

</br>

<!-- 
- [ ] Chapter 17 - Compiling Expressions
- [ ] Chapter 18 - Type of Values
- [ ] Chapter 19 - Strings
- [ ] Chapter 20 - Hash Tables
- [ ] Chapter 21 - Global Variables
- [ ] Chapter 22 - Local Variables 
- [ ] Chapter 23 - Jumping Back and Forth 
- [ ] Chapter 24 - Calls and Functions
- [ ] Chapter 25 - Closures
- [ ] Chapter 26 - Garbage Collection
- [ ] Chapter 27 - Classes and Instances 
- [ ] Chapter 28 - Methods and Intializers
- [ ] Chapter 29 - Superclasses 
- [ ] Chapter 30 - Optimization
 -->
