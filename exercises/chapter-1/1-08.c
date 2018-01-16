/*
 * Filename   1-08.c
 * Author     Federico Maria Massari <federico.massari@bocconialumni.it>
 * Book       "The C Programming Language, 2nd Ed.", by Kernighan, B.W.
 *             and Ritchie, D.M.
 *
 * Exercise 1-8, p.20
 * Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

main()
{
    int blank, tab, newline;
    int c;    /* int, as opposed to char, is big enough to hold EOF */

    blank = 0;    /* Initialise variables */
    tab = 0;
    newline = 0;

    /* Increment variable if input != EOF and an equality is met;
     * equality with EOF is reached when CTRL+D is pressed. */
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blank;

        if (c == '\t')
            ++tab;

        if (c == '\n')
            ++newline;
    }

    /* Print output after CTRL+D is pressed */
    printf("\nBlank count: %d\n", blank);
    printf("Tab count: %d\n", tab);
    printf("Newline count: %d\n", newline);
}
