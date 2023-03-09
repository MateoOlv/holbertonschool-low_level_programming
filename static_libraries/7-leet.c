#include "main.h"
/**
 *leet - leet function
 *@a: a
 *Return: return
 */
char *leet(char *a)
{
char x[] = "AEOTL";
char n[] = "43071";
int i = 0, z = 0;

while (a[i])
{
	z = 0;
	while (z < 5)
	{
		if (a[i] == x[z] || a[i] - 32 == x[z])
		{
		a[i] = n[z];
		}
	z++;
	}
	i++;
}
return (a);
}
