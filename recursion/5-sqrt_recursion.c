#include "main.h"
/**
 *_sqrt_recursion - recursion
 *@n: n
 *Return: Return
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return(numraiz(n, 1));
	}

}
/**
 *numraiz - raiz
 *@n: n
 *@a:a
 *Return: return
 */
int numraiz(int n, int a)
{
	if (n == (a * a))
	{
		return (a);
	}
	else if (n > (a * a))
	{
		return (numraiz(n, a + 1));
	}
	else
	{
		return (-1);
	}
}
