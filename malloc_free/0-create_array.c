#include "main.h"
/**
 *create_array - create array
 *@size: size 
 *@c: array
 *Return: a
 */
char *create_array(unsigned int size, char c)
{
	unsigned s;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (s = 0; s < size; s++)
	{
		a[s] = c;
	}
	return (a);

}
