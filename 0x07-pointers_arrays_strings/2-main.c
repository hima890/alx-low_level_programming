#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "uck you f ";
    char *f;

    f = _strchr(s, 'f');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}