/*
 * Filename   1-10.c
 * Author     Federico Maria Massari <federico.massari@bocconialumni.it>
 * Book       "The C Programming Language, 2nd Ed.", by Kernighan, B.W.
 *             and Ritchie, D.M.
 *
 * Exercise 1-10, p.20
 * Write a program to copy its input to its output, replacing each tab by
 * \t, each backspace by \b, and each backslash by \\. This makes tabs and
 * backspaces visible in an unambiguous way.
 */
#include <stdio.h>

main() {

    int c;

    while ((c = getchar()) != EOF) {
        if (c != '\t')             /* Print c if not in {'\t', '\b', '\\'} */
            if (c != '\b')
                if (c != '\\')
                    putchar(c);

        if (c == '\t')     /* Print corresponding string constant otherwise*/
            printf("\\t\n");
        if (c == '\b')
            printf("\\b\n");
        if (c == '\\')
            printf("\\\\n");
    }
}
