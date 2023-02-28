#include "main.h"
/**
 *print_rev - main function
 *
 */
void print_rev(char *s)
{
	int a;
	for (a = (_strlen(s) - 1); a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
