#include "main.h"
/**
 *print_alphabet_x10 - start
 *
 */
void print_alphabet_x10(void)
{
	char l = 'a';
	char a;

	for (a = 0 ; a <= 9 ; a++)
	{
	while (l <= 'z')
	{
	_putchar(l);
	l++;
	}
	_putchar('\n');
	}
}
