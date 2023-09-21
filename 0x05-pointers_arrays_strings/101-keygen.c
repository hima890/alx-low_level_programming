#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomInt - Generate a random integer between min and max (inclusive).
 *
 * Parameters:
 *   min: The minimum value of the random integer.
 *   max: The maximum value of the random integer.
 *
 * Return: The generated random integer.
 */

/**
 * randomLowercaseLetter - Generate a random lowercase letter.
 *
 * Return: The generated random lowercase letter.
 */

/**
 * randomUppercaseLetter - Generate a random uppercase letter.
 *
 * Return: The generated random uppercase letter.
 */

/**
 * randomDigit - Generate a random digit.
 *
 * Return: The generated random digit.
 */

/**
 * generatePassword - Generate a random password.
 *
 * Parameters:
 *   password: Pointer to the character array where the password will be stored.
 *   length: The length of the password to generate.
 *
 * Description:
 *   This function generates a random password with a mix of lowercase letters,
 *   uppercase letters, and digits and stores it in the provided character array.
 *   The generated password is null-terminated.
 */

/**
 * main - Entry point of the program.
 *
 * Description:
 *   This function seeds the random number generator, generates a random password,
 *   and prints it.
 *
 * Return: Always 0.
 */

int randomInt(int min, int max)
{
return rand() % (max - min + 1) + min;
}

char randomLowercaseLetter()
{
return 'a' + randomInt(0, 25);
}

char randomUppercaseLetter()
{
return 'A' + randomInt(0, 25);
}

char randomDigit()
{
return '0' + randomInt(0, 9);
}

void generatePassword(char *password, int length)
{
for (int i = 0; i < length; i++)
{
int choice = randomInt(0, 2);
if (choice == 0)
{
password[i] = randomLowercaseLetter();
}
else if (choice == 1)
{
password[i] = randomUppercaseLetter();
}
else
{
password[i] = randomDigit();
}
}
password[length] = '\0'; // Null-terminate the password
}

char* main()
{
srand(time(NULL)); // Seed the random number generator with the current time

int passwordLength = 12; // Adjust the password length as needed
char password[passwordLength + 1]; // +1 for null terminator

generatePassword(password, passwordLength);


return (password);
}
