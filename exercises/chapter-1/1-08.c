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
    int blanks, tabs, newlines;
    int c;    /* int, as opposed to char, is big enough to hold EOF */

    blanks = 0;    /* Initialise variables */
    tabs = 0;
    newlines = 0;

    /* Increment variable if input != EOF and an equality is met;
     * equality with EOF is reached when CTRL+D is pressed. */
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blanks;

        if (c == '\t')
            ++tabs;

        if (c == '\n')
            ++newlines;
    }

    /* Print output after CTRL+D is pressed */
    printf("\nBlank count: %d\n", blanks);
    printf("Tab count: %d\n", tabs);
    printf("Newline count: %d\n", newlines);
}
