/*
 * Filename   1-04.c
 * Author     Federico Maria Massari <federico.massari@bocconialumni.it>
 * Book       "The C Programming Language, 2nd Ed.", by Kernighan, B.W.
 *             and Ritchie, D.M.
 *
 * Exercise 1-4, p.12
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include <stdio.h>

/* Print Celsius to Fahrenheit table
 * for celsius = 0, 20, ..., 300 */
main()
{
    int lower, upper, step;
    int celsius, fahr;        /* Type float not necessary */

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius-Fahrenheit converter\n");
    while (celsius <= upper) {
        fahr = (9/5) * celsius + 32;
        printf("%3d %6d\n", celsius, fahr);
        celsius = celsius + step;
    }
}
