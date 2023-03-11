#include "main.h"
/**
 *main - that prints all arguments it receives.
 *@argc: argc
 *@argv: argv
 *Return:0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	for (; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
