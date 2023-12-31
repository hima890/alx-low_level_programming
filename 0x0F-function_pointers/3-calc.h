#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

/**
 * op_add - Returns the sum of a and b.
 *
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b);

/**
 * op_sub - Returns the difference of a and b.
 *
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b);

/**
 * op_mul - Returns the product of a and b.
 *
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b);

/**
 * op_div - Returns the result of the division of a by b.
 *
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of the division of a by b.
 */
int op_div(int a, int b);

/**
 * op_mod - Returns the remainder of the division of a by b.
 *
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b);


int (*get_op_func(char *s))(int, int);

#endif
