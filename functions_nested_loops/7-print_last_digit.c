#include "main.h"
/**
 * print_last_digit - entry point
 * @n: variab
 * Return: return last number
 *
 */
int print_last_digit(int n)
{
	int a;
	int x = n % 10;
	if (x < 0)
	{
	x = -x;
	}
	_putchar(a = '0' + x);
	return(a);
}
