#include "main.h"
#include "2-strlen.c"
/**
 *puts_half - main function that prints the half of a string
 *@str: string
 */
void puts_half(char *str)
{
int a = 0;
int b = 0;

	if (_strlen(str) % 2 != 0)
	{
		a++;
	}
	for (b = (_strlen(str) + a) / 2; b < _strlen(str); b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');

}
