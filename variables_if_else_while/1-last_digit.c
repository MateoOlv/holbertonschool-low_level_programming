#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - start
 *Return: always 0
 *
 *
 */
int main(void)
{
	int n;
	int ln;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (ln > 5)
	{
		printf("%d and is greater than 5\n", ln);
	}
	else if (ln == 0)
	{
		printf("%d and is 0\n", ln);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", ln);
	}

	return (0);
}
