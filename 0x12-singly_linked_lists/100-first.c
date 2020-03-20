#include <stdio.h>
/**
 * thisbeforemain - prints before main
 */
void __attribute__((constructor)) thisbeforemain(void);
void thisbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
