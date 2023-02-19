#include "main.h"
/**
 *print_alphabet_x10 - start
 *
 */
void print_alphabet_x10(void)
{
	int l;
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
	for (l = 'a' ; l <= 'z' ; l++)
	{
	_putchar(l);
	}
	_putchar('\n');
	}
}
