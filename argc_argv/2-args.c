#include "main.h"
/**
 *main - that prints all arguments it receives.
 *@argc: argc
 *@argv: argv
 *Return:0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		{
			printf("%s\n", argv[a]);
		}
	return (0);
}
