#include <stdio.h>
/**
 *main - start
 *Return: always 0
 *
 */
int main(void)
{
	int locura;

	for (locura = 0 ; locura < 16 ; locura++)
	{
	if (locura < 10)
	{
	putchar(locura + '0');
	}
	else
	{
	putchar(locura - 10 + 'a');
	}
	}
	putchar('\n');
	return (0);
}
