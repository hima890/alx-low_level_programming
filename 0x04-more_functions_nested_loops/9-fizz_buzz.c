#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 * print_number - print from 0 to 100.
*/



void print_number(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}

printf("\n");
}

int main(void)
{
print_number();
return (0);
}
