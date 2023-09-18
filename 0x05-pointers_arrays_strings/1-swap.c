#include "main.h"
/* more headers goes there */

/**
 * swap_int - function that swaps the values of two integers.
 * @a: takes a pointer to an int
 * @b: takes a pointer to an int
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
