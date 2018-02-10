/*
 * Filename   1-09.c
 * Author     Federico Maria Massari <federico.massari@bocconialumni.it>
 * Book       "The C Programming Language, 2nd Ed.", by Kernighan, B.W.
 *             and Ritchie, D.M.
 *
 * Exercise 1-9, p.20
 * Write a program to copy its input to its output, replacing each string
 * of one or more blanks by a single blank.
 */

#include <stdio.h>

#define    NONBLANK    'a'

main()
{
    int c, lastc;

    lastc = NONBLANK;
    while ((c = getchar()) != EOF) {
        if (c != ' ')
            putchar(c);
        if (c == ' ')
            if (lastc != ' ')
                putchar(c);

        lastc = c;
    }
}
