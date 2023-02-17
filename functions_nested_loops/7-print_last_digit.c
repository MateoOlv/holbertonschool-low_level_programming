#include "main.h"
/**
 * print_last_digit - entry point
 * @n: variab
 * Return: return last number
 *
 */
int print_last_digit(int n)
{
int ln = n % 10;

if (ln < 0)
{
ln = -ln;
}
printf("%d", ln);
return (ln);
}
