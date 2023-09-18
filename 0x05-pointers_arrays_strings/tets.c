#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int var = 1000;
int *var_piont = &var;
char *name = "Ibrahim hanafi";
int count = 0;
// printf("The var is: %d, the pointer: %d, the adress is: %p\n", var, *var_piont, var_piont);
// *var_piont = *var_piont + 50;
// printf("The var is: %d, the pointer: %d, the adress is: %p\n", var, *var_piont, var_piont);

// printf("The var is: %d, the pointer: %d, the adress is: %p\n", var, *var_piont, var_piont);

// printf("The var is: %s, the pointer: %c, the adress is: %p, the value is : %p\n", name, *name, name, &name);
for (int i = 0; name[i] != '\0'; i++)
{
count++;
}
printf("the lenght : %d\n", count);
return (0);
}