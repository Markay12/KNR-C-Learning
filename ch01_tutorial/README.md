# Chapter 01: Tutorial Notes

* As a general note - I am not attempting to re-write the K&R book. What the purpose here is for me to write out bullet points on what I think is the most important information they convey in the book for myself and for you to skim what I believe to be the most important. 

# Table of Contents

1. Basics


## Basics

Here is a short list on what they considered to be basic in the book

1. Variables and Constants
2. Arithmetic (1+2 = 3)
3. Control Flow
4. Functions
5. Rudiments of Input and Output

They are meaning to leave out more complicated topics intentionally for a later time. These include:

1. Pointers
2. Structures
3. Some of C's Rich Operators
4. Several Control Flow Statements
5. The Standard Library

* A C program, no matter what its size, consists of variables and functions. A function contains statements that specify the computational statements to be performed, and variables store the values used during those computations.

* "main" function is special. This is where the program begins execution. Every program must have a main function somewhere.

## Writing The First Hello, World Program

* \#include <stdio.h> tells the compiler to include information about the standard input/output library. This is used in many C programs.

* The sequence \\n is for the newline character.

* printf never supplies the newline automatically. You will need to use the newline character yourself to do this.

### Escape Sequences

* t: tab
* b: backspace
* ": double quote
* \\: backslash 
