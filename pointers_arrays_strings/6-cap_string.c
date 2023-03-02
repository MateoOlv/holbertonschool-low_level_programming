#include "main.h"
/**
 *cap_string - main
 *@a: a
 *Return: return
 */
char *cap_string(char *s)
{
	int a = 0;
	int i = 0;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s [a])
	{
	while (i < x)
		{
		if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
		{
			s[a] -= 32;
		}
		i++;
		}
	a++;
	}
	return (s);
}
