#include <stdio.h>

/* Federico Maria Massari / federico.massari@bocconialumni.it */

/*
 * Exercise 1-8 p.20
 * Write a program to count blanks, tabs, and newlines
 * Equality with EOF is reached when CTRL+D is pressed
 * Compile with cc -ansi 1-8.c and run with ./a.out
 */

main()
{
    int blank, tab, newline;
    int c;

    /* Initialise variables */
    blank = 0;
    tab = 0;
    newline = 0;

    /* Increment variable if input != EOF and an equality is met */
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
