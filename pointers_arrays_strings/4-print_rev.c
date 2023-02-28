#include "main.h"
/**
 *print_rev - main function
 *
 */
void print_rev(char *s)
{
	int a;
	for (a = (_strlen(s) - 1); i >= 0; i--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
