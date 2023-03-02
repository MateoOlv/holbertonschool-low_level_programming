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
	int a;

		for (a = 0; a < n && src[a] != '\0'; a++)
		{
		dest[a] = src[a];
		}
		for (; a < n; a++)
		{
			dest[a] = '\0';
		}
	return (dest);
}
