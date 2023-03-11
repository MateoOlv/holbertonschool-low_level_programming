#include "main.h"
/**
 *main - adds positive numbers.
 *@argc: a
 *@argv: a
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int res = 0;
	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argc[a][b]; a++)
			{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return(-1);
			}
			}
		res += atoi(argv[a]);
		}
	}
	printf("%d\n", res);
	return (0);
}
