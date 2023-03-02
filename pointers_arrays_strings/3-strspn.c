#include "main.h"
/**
 *_strspn - main
 *@s: s
 *@accept: accept
 *Return: return
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a;
unsigned int b;
unsigned int res;

for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; s[b] != '\0'; b++)
		{
		if (s[a] == accept[b])
		{
		res++;
		break;
		}
		}
	if (s[a] == '\0')
		{
		return (res);
		}
	}
return (res);
}
