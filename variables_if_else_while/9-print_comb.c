#include <stdio.h>
/**
 *main - entry point
 *Return: always 0
 *
 */
int main(void)
{
int yanose;
for (yanose = 10 ; yanose < 20 ; yanose++)
{
	/*Convierte la cosa yanose a la cosa ascii*/
putchar((yanose % 10) + '0');

	if (yanose != 19)
	{
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}
