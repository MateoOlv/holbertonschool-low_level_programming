#include "main.h"
/**
 * print_last_digit - entry point
 * @n: variab
 * Return: return last number
 *
 */
int print_last_digit(int n)
{
	int ln;

	if (n < 0)
	{
	n = -n;
	}
	ln = n % 10;
	_putchar(ln + '0');
	return (ln);

}
