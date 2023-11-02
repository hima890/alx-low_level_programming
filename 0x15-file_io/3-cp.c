#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * error_exit - Print an error message and exit with a specific status code.
 * @status: The status code to exit with.
 * @message: The error message to print.
*/

void error_exit(int status, char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(status);
}

/**
 * main - Copy the content of a file to another file.
 * @ac: The number of arguments.
 * @av: An array of arguments (ac should be 3:
 * program name, file_from, file_to).
 * Return: 0 on success, or the specific error code on failure.
*/

int main(int ac, char **av)
{
int file_from, file_to;
ssize_t read_bytes, write_bytes;
char buffer[1024];

if (ac != 3)
error_exit(97, "Usage: cp file_from file_to");

file_from = open(av[1], O_RDONLY);
if (file_from == -1)
error_exit(98, "Error: Can't read from file");

file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
error_exit(99, "Error: Can't write to file");

while ((read_bytes = read(file_from, buffer, sizeof(buffer))) > 0)
{
write_bytes = write(file_to, buffer, read_bytes);
if (write_bytes == -1)
error_exit(99, "Error: Can't write to file");
}

if (read_bytes == -1)
error_exit(98, "Error: Can't read from file");

if (close(file_from) == -1)
error_exit(100, "Error: Can't close fd");
if (close(file_to) == -1)
error_exit(100, "Error: Can't close fd");

return (0);
}
