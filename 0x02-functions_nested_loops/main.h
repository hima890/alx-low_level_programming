#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - Writes a character to the standard output.
 * (9 chars long)
 * @c: The character to be written.
 *
 * Return: On success, 1. On error, -1 is returned,
 *  and errno is set appropriately.
 * print_alphabet - Write the alphabet to the standard output.
 * print_alphabet - Writes the a alphabet to the standard output.
 * With new line at the end
 * (27 chars long)
 * print_alphabet_x10 - Writes the a alphabet to the standard output.
 * With new line at the each end line.
 * _islower - return 1 if the charchter is lower case and 0 if not
 * @c : The character to be checking.
 * it return int
 * _isalpha - return 1 if c is charchter 0 if not
 * @c : The character to be checking.
 * it return int
 * print_sign :  prints the sign of a number.
 * _abs - function that computes the absolute value of an integer.
 */


int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
#endif /* MYHEADER_H */
