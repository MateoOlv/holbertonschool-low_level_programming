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
	char n[] = {'\n', '\t', ' ', '.', ',', ';', ',',
'!', '?', '(', ')', '{', '}'};
	while (a[num])
	{
	while (x < 13)
	{
	if ((num == 0 || a[num - 1] == n[num]) && (a[num] >= 97 && a[num] <= 122))
	{
		a[num] -= 32;
	}
	x++;
	}
	num++;
	}
	return (a);
}
