#include "main.h"
/**
 *print_array - main function that prints an array of integers
 *@a - array
 *@n - number of elements of the array to be printed
  */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
