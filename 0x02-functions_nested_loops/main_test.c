#include <limits.h>
#include "main.h"
#include<stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
    int row, col, result;

    for (row = 0; row <= 9; row++) {
        for (col = 0; col <= 9; col++) {
            result = row * col;

            if (col != 0) {
                putchar(',');
                putchar(' ');

                // Print leading space for single-digit results
                if (result < 10) {
                    putchar(' ');
					putchar(' ');
                }
				
            }

            // // Print tens and ones digits
            putchar('0' + (result / 10));
            putchar('0' + (result % 10));
        }
        putchar('\n');
    }


    return (0);
}
