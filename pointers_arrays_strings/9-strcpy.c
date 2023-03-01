#include "main.h"
#include "2-strlen.c"
/**
 *_strcpy - main funcion
 *@dest: dest
 *@src: soruce
 *Return: char valeu
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; a <= _strlen(src); a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
