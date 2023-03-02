#include "main.h"
/**
 *reverse_array - main
 *@a: a
 *@n: n
 */
void reverse_array(int *a, int n)
{
	int x, b;

	for (x = 0; x < n / 2; x++)
	{
	b = a[x];
	a[x] = a[n - x - 1];
	a[n - x - 1] = b;
	}
}
