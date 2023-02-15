#include <stdio.h>
/**
 *main - start
 *Return: always 0
 *
 *
 */
int main(void)
{
	char abc;

	for (abc = 'a' ; abc <= 'z' ; abc++)
	{
	if (abc == 'q' || abc == 'e')
		{
		abc++;
		}
	putchar(abc);
	}
	putchar('\n');
	return (0);
}
