/*
 * Filename   1-05.c
 * Author     Federico Maria Massari <federico.massari@bocconialumni.it>
 * Book       "The C Programming Language, 2nd Ed.", by Kernighan, B.W.
 *             and Ritchie, D.M.
 *
 * Exercise 1-5, p.14
 * Modify the temperature conversion program to print the table in reverse
 * order, that is, from 300 degrees to 0.
 */

#include <stdio.h>

#define    LOWER    0
#define    UPPER    300
#define    STEP     20

main()
{
    int fahr;

    printf("Fahrenheit-Celsius converter\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }
}
