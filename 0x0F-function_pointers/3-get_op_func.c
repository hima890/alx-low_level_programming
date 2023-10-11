#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function
 * to perform the requested operation.
 *
 * @s: The operation as a string (e.g., "+", "-", "*", "/", or "%").
 *
 * Description:
 *   This function takes a string representing
 * an operation and returns a pointer
 *   to the corresponding function that performs
 * that operation. If the requested
 *   operation is not recognized, it returns NULL.
 *
 * Return: A pointer to the function that performs
 * the requested operation, or NULL.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

while (ops[i].op)
{
if (strcmp(ops[i].op, s) == 0)
{
return (ops[i].f);
}
i++;
}
return (NULL);

}
