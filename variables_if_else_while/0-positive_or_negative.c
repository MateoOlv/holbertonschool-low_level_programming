#include <stdlib.h>
#include <time.h>
/**
 *main - start
 *Return: always 0
 *
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
	printf("%d is negative\n");
	}
	else if (n == 0)
	{
	printf("%d is zero\n");
	}
	else
	{
	print("%d is positive\n");
	}
	return (0);
}
