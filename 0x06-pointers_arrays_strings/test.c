#include <stdio.h>

int main(void)
{
//     int number = 10;
//     int *ptr;
//     int **ptr2;

//     ptr = &number;
//     ptr2 = &ptr;

//     /* take the value using pptr */
//    printf("Value of var = %d\n", number );
//    printf("Value available at *ptr = %d\n", *ptr );
//    printf("Value available at **pptr = %d\n", **ptr2);

    int numbers[3][3] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j;
     /* output each array element's value */
   for ( i = 0; i < 3; i++ )
   {
      for ( j = 0; j < 3; j++ )
      {
        printf("numbers[%d][%d] = %d\n", i,j, numbers[i][j] );
      }
   }


    return 0;
}