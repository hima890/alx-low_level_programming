#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: The number of bytes to allocate.
 *
 * Description:
 *  This function allocates a block of memory of size @b bytes using the malloc
 *  function. If the allocation fails (i.e., malloc returns NULL), the function
 *  terminates the process with an exit status of 98.
 *
 * Return:
 *   - On success, a pointer to the allocated memory block.
 *
 * Notes:
 *   - It is the responsibility of the caller to free the allocated memory when
 *     it is no longer needed to prevent memory leaks.
 *   - This function is designed to ensure that memory allocation is successful
 *   and to terminate the program if it fails, providing robust error handling.
 */
void *malloc_checked(unsigned int b)
{
/* Implementation goes here */
void *memory_ptr = malloc(b);
int exit_status = 98;
if (memory_ptr == NULL)
{
exit(exit_status);
}
return (memory_ptr);
}
