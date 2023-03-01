#include "main.h"
/**
 *_atoi - function that convert a string to an integer
 *@s: string to convert
 *Return: the string converted into a integer
 */
int _atoi(char *s)
{
int a = 1;
int b = 0;
int con = 0;
int tmp = *s - '0';

if (*s == ' ' || *s == '+')
	{
		s++;
	}
	else if (*s == '-')
		{
			a = -1;
			s++;
		}
while(*s)
{
	if (*s >= '0' && *s <= '9')
	{
		b = b * 10 + tmp;
		con = 1;
	}
	else if ((con = 0))
	{
		break;
	}
	s++;
}
	return b * a;
}
