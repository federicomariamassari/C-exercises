# C Exercises
## Introduction
As I delve into C, the _lingua franca_ of programming, I find that the language is really helping me understand Python—and programming in general—much better. So far, I am really enjoying C!

This repository, a hobby, contains my solutions to the exercises of the classic C book "_The C Programming Language, 2nd Edition_", by Kernighan B.W. and Ritchie D.M. The solutions only contain code elements studied up to that point in the book. As for commented sections, I am trying to follow the NASA [C style guide](http://homepages.inf.ed.ac.uk/dts/pm/Papers/nasa-c-style.pdf).

Hopefully, I will also pick up Assembly and Java one day.

## How to run the code
On Terminal (UNIX), compile the desired exercise with:
```
$ gcc -ansi <filename>.c
```
And execute using:
```
$ ./a.out
```
### Example
To run the first exercise, open Terminal and, while in the same folder, digit (omitting the `$` prompt):
```
$ gcc -ansi 1-01.c
$ ./a.out
```
The first command, `gcc -ansi 1.01.c`, compiles file `1-01.c` according to the ANSI standard, the same used in the book. On macOS, there exists a faster version, `cc -ansi 1.01.c`. The command generates output `a.out` in the same folder. `a.out` is replaced every time a new program is run. To execute it, it is necessary to include `./`, which locates the file is in the same folder.

The program:
```c
#include <stdio.h>

main()    /* Print hello, world */
{
    printf("hello, world\n");
}
```
Prints:
```
hello, world
```

## Exercises
### Chapter 1

<table>
    <tr>
        <td align="left" width="50"><b>Exercise</b>
        </td>
        <td align="left" width="800"><b>Description</b>
        </td>
    </tr>
    <tr>
    </tr>
    <tr>
        <td align="center">
        <b><a href="https://github.com/federicomariamassari/C-exercises/blob/master/exercises/chapter-1/1-01.c">1-01</a href></b>
        </td>
        <td>
        Run the "hello, world" program on your system.
        </td>
    </tr>
    </tr>
    <tr>
    </tr>
    <tr>
        <td align="center">
        <b><a href="https://github.com/federicomariamassari/C-exercises/blob/master/exercises/chapter-1/1-08.c">1-08</a href></b>
        </td>
        <td>
        Write a program to count blanks, tabs, and newlines.
        </td>
    </tr>
</table>
