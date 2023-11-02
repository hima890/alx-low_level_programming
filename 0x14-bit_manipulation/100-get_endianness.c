#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int n = 1;
char *c = (char *)&n;

/* If the least significant byte is stored at the lowest address,
then it is a little-endian system. Otherwise, it is big-endian. */
return (int)*c;
}
