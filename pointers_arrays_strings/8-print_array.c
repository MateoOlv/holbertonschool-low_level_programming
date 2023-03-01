#include "main.h"

void print_array(int *a, int n)
{
	int x = 0;
	for (; x < n; x++)
	{
		printf("%d", a[x]);
		if(x != n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
