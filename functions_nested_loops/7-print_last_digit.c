#include "main.h"
/**
 * print_last_digit - entry point
 * @n: variab
 * Return: return last number
 *
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
	x = -x;
	}
	_putchar(x + '0');
	return (x);
}
