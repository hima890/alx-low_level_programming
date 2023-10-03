#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number_of_data = 2;
    int *ptr = (int *) malloc(number_of_data * sizeof(int));
    for (int i = 0; i < number_of_data; i++)
    {
        printf("Enter the value:\n");
       scanf("%d", ptr + i);
    }
    
    for (int i = 0; i < number_of_data; i++)
    {
       printf("Data in the location '%p' is : %d\n", ptr + i, *(ptr + i));
    }
    free(ptr);
    return 0;
}
