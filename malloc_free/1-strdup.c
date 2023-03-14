#include "main.h"
/**
 *_strdup - main function
 *@str: str
 *Return: sometimes NULL sometimes c
 */
char *_strdup(char *str)
{
	int a, b = 0;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[b])
	{
		b++;
	}
	c = malloc(sizeof(char) * b + 1);

	if (c == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < b; a++)
	{
		c[a] = str[a];
	}
	c[a] = '\0';
	return (c);

}
