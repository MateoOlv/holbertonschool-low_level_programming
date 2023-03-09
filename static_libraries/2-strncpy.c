#include "main.h"
/**
 *_strncpy - main
 *@dest: Destination
 *@src: Source
 *@n: N
 *Return: Return Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
