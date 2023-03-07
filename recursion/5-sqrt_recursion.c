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
		return(raizcuadrada(n, 1));
	}

}
int raizcuadrada (int n, int a)
{
	if (n == (a * a))
	{
		return (a);
	}
	else if (n > (a * a))
	{
		return (raizcuadrada(n, a + 1));
	}
	else
	{
		return (-1);
	}
}
