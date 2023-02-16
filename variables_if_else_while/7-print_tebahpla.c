#include <stdio.h>
/**
*main - start
*Return: always 0
*
*/
int main(void)
{
	char cba = 'z';

	while (cba >= 'a')
	{
	putchar(cba);
	cba++;
	}
	putchar('\n');
	return (0);
}
