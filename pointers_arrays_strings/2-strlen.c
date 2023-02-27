#include "main.h"
/**
 *_strlen - main func
 *@s: string
 *Return: string lenght
 */
int _strlen(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		*s++;
	}
	return (length);
}
