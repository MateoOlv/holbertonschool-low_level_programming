#include "main.h"
#include "2-strlen.c"
/**
 *cap_string - main
 *@s: s
 *Return: return
 */
char *cap_string(char *s)
{
	int a, c;
	int may = 1;
	char sp[] = {32, 9, 10, 44, 59, 34, 40, 41, 123, 125, 46, 33, 63};

	for (a = 0; a < _strlen(s); a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z' && may == 1)
		{
			s[a] -= 32;
		}
		may = 0;
		for (c = 0; sp[c]; c++)
		{
			if (s[a] == sp[c])
			{
			may = 1;
			}
		}
	}
	return (s);
}
