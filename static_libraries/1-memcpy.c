#include "main.h"
/**
 *_memcpy - main function to copy the area
 *@dest: destination of the memory area
 *@src: source of the memory area
 *@n: n
 *Return: Return
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	dest[a] = src[a];
	}
	return (dest);
}
