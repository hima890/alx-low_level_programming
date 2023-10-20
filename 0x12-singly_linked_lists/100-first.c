#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - This function will be executed before main.
*/
void before_main(void)
{
char *string = "You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n";
printf("%s", string);
}
