#include "main.h"
/**
 *_strchr
 *@s: s
 *@c: c
 *
 */
char *_strchr(char *s, char c)
{
int a;

for (a = 0; s[a] != '\0')
{
	if (s[a] == c)
	{
	return (s + i);
	}
}
if (c == s[a])
{
return (s + a);
}
return (0);
}
