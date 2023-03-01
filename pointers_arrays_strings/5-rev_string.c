#include "main.h"
#include "2-strlen.c"
/**
 *rev_string - main function that rev a string
 *@s: string
 */
void rev_string(char *s)
{
	int leng = _strlen(s) - 1;
	char tmp;
	int i;

	for (i = 0; i < leng / 2; i++)
	{
		tmp = s[i];
		s[i] = s[leng - i];
		s[leng - i] = tmp;
	}
}
