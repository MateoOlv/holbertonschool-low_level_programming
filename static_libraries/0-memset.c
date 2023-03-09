#include "main.h"
/**
 *_memset - meme main function
 *@s: fill area
 *@b: byte area
 *@n: memory byte area
 *Return: return
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
	return (s);
}
