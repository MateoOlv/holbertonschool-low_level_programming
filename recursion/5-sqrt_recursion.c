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
		return(numraiz(n, 1));
	}

}
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
