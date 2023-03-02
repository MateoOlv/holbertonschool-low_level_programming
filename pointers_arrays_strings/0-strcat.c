#include "main.h"
/**
 *_strcat - main funciont that concatenate two strings
 *@dest: string
 *@src: string
 *Return: Return dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
