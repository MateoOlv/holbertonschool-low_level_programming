#include "main.h"
/**
 *_strncat - main funtion
 *@dest: destination input
 *@src: source input
 *@n: amount input
 *Return: return destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

		for (a = 0; src[a] != '\0'; a++)
		{
			;
		}
		for (b = 0; b < n; b++)
		{
			dest[a + b] = src[b];
		}
		dest[a + b] = '\0';
	return (dest);
}
