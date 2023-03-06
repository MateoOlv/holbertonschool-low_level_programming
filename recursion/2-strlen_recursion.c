#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string.
 *@s: string
 *Return: if *s return a + 1 else return 0
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a = _strlen_recursion(s + 1);
		return (a += 1);
	}
	return (0);
}
