#include "main.h"
/**
 *_puts - main function
 *str: variable char type
 */
void _puts(char *str)
{
	int a;

	for (a = 0; *(str + a) != '\0'; a++)
	{
	_putchar(*(str + a));
	}
	_putchar('\n');
}
