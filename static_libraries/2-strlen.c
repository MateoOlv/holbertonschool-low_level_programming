#include "main.h"
/**
 *_strlen - main func
 *@s: string
 *Return: string lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
