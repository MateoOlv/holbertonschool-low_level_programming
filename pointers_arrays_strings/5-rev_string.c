#include "main.h"
#include "2-strlen.c"
/**
 *rev_string - main function that rev a string
 *@s: string
 */
void rev_string(char *s)
{
	int leng = _strlen(s);
	char tmp;
	int i;

	for (i = 0; i < leng / 2; i++)
	{
		tmp = s[i];
		s[i] = s[leng - 1 - i];
		s[leng - 1 - i] = tmp;
	}
}
