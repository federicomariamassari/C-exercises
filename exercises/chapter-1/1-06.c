/*
 * Filename   1-06.c
 * Author     Federico Maria Massari <federico.massari@bocconialumni.it>
 * Book       "The C Programming Language, 2nd Ed.", by Kernighan, B.W.
 *             and Ritchie, D.M.
 *
 * Exercise 1-6, p.17
 * Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

main() {

    int c;

    while ((c = getchar()) != EOF)
        printf("%d\n", c = getchar() != EOF);

    printf("%d\n", 0);    /* Print 0 if c == EOF */
}
