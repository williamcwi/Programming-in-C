/* This program subtracts 15 from 87
   and displays the results             */

#include <stdio.h>

int main (void)
{
    // Declare variables
    int value1, value2, sum;

    // Assign values and calculate
    value1 = 87;
    value2 = 15;
    sum = value1 - value2;
    // Display the result
    printf ("%i minus %i is %i\n", value1, value2, sum);

    return 0;
}