#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
unsigned char *main_ptr;
int i;
if (argc != 2)
{
fprintf(stderr, "Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
fprintf(stderr, "Error\n");
return (2);
}

main_ptr = (unsigned char *)main;

for (i = 0; i < num_bytes; i++)
{
printf("%02x", main_ptr[i]);
if (i < num_bytes - 1)
{
printf(" ");
}
else
{
printf("\n");
}
}

return (0);
}
