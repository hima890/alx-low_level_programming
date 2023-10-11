#include <stdio.h>
#include "function_pointers.h"


/**
 * print_name - Calls a function to print a name.
 *
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char* as a parameter and prints it.
 *
 * Description:
 *   This function takes a name as a parameter and a function pointer to a
 *   function that can print a name. It then calls the provided function to
 *   print the name.
 *
 * Return: None (void)
 */
void print_name(char *name, void (*f)(char *))
{

if (name != NULL && f != NULL)
{
(*f)(name);
}

}
