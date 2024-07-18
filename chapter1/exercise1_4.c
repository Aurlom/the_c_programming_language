/* Chapter 1, Exercise 1-4 (p. 13) */

#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = -20, -10, ..., 150; floating-point version */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;      /* lower limit of temperature table */
    upper = 150;    /* upper limit */
    step = 10;      /* step size */

    celsius = lower;

    printf(" C      F\n");
    printf("----------\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}