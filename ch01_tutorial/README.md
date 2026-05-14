# Chapter 01: Tutorial Notes

* As a general note - I am not attempting to re-write the K&R book. What the purpose here is for me to write out bullet points on what I think is the most important information they convey in the book for myself and for you to skim what I believe to be the most important. 

## Table of Contents

1. Basics
2. Variables and Arithmetic Expressions
3. Loops
   1. While Loop
   2. For Loop
4. printf()


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

## Variables and Arithmetic Expressions

New topics that will find in this section include comments, declarations, variables, arithmetic expressions, loops, and formatted output.

When you are writing comments in C, anything between the characters /* ABCD */ will be ignored by the compiler. In this case, the compiler would ignore the characters ABCD. Also, fun specific fact, in this case with coding in std-89 there is no such thing as // comments. In most cases, and especially in my professional career, these // comments are called temporary.

In C, all variable must be declared before they are used. A declaration announces the properties of the variable itself.

* __char:__ character - a single byte
* __short:__ short integer
* __long:__ long integer
* __double:__ double precision floating point

The size of these objects individually is machine independent, meaning the size changes per machine.

## Loops
### While Loop

```C
int i = 1;
int j = 10;

while( i < j )
{
    i = 2 * i;
}
```

The condition in the parenthesis is tested `(i < j)`. If `i` is less than `j` then we continue into the for loop. This condition is evaluated each time we run into the loop itself. Once the condition does not evaluate to `true` the while loop will exit.

### For Loop
The for loop operates in a similar manner and is more useful when you know the certain amount of computations that are to be perfomed. The whlie loop is more efficient when there is a single based condition or multiple exit conditions that should occur within the loop itself.

```C
int idx;

for( idx = 0; idx < 52; idx++ )
{
    /* Do something here */
    break;
}
```

Think to yourself for a moment if it makes sense to put 52 here alone or if we should define it as something else to help with readability.


## printf()
printf() is a general purpose output formatting function. This is ultimately important for outputting data for the user and to visually represent manipulated or expressed data.

Arguments are to be substituted in place with values/parameters. For instance, %d specifies an integer argument.

```C
printf( "Mark's temperature this morning was %d! degrees!", marks_temperature );
```

In this case, %d would be replaced with the integer value for Mark's temperature.