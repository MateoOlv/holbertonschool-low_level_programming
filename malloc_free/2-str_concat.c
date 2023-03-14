#include "main.h"
/**
 *str_concat - concat
 *@s1: s1
 *@s2: s2
 *Return: return
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b1 = 0, b2 = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
	{
		a++;
		b1++;
	}
	a = 0;
	while (s2[a])
	{
		a++;
		b2++;
	}
	s = malloc(sizeof(char) * (b1 + b2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < b1; a++)
	{
		s[a] = s1[a];
	}
	for (a = 0; a < b2; a++)
	{
		s[a + b1] = s2[a];
	}
	s[a + b1] = '\0';
	return (s);

}
