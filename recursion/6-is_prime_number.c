#include "main.h"
/**
 *is_prime_number - number primo
 *@n: n
 *Return: return
 */
int is_prime_number(int n)
{
int a = 2;
if (n < 2)
{
return (0);
}
return (primonum(n, a))
}
/**
 *primonum - prime
 *@n: n
 *@a: a
 *Return: a
 */
int primonum(int n, int a)
{
	if (n % a == 0 && n != a)
	{
		return (0);
	}
	else if (n % a != 0 && a < n)
	{
		return (primonum(n, a + 1));
	}
	return (1);
}
