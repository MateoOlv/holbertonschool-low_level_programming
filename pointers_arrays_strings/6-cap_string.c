#include "main.h"
/**
 *cap_string - main
 *@a: a
 *Return: return
 */
char *cap_string(char *a)
{
	int x;
	int num = 0;
	char n[13] = {'\n', '\t', ' ', '.', ',', ';', ',',
'!', '?', '(', ')', '{', '}'};
	while (a[num])
	{
	while (x < 13)
	{
	if ((num == 0 || a[num - 1] == n[num]) && (a[num] >= 'a' && a[num] <= 'z'))
	{
		a[num] = a[num] - 32;
		x++;
	}
	}
	x++;
	}
	return (a);
}
