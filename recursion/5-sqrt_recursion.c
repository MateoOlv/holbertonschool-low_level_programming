#include "main.h"

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
		return(sqrt(n, 1));
	}

}
int sqrt (int a, int n)
{
	if (n < (a * a))
	{
		return (-1);
	}
	else if (n == (a * a))
	{
		return (a);
	}
	else if (n > (a * a))
	{
		return (sqrt(n, a + 1));
	}
