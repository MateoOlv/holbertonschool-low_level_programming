#include "main.h"
/**
 *main - prints all arguments it receives
 *@argc: argc
 *@argv: argv
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
