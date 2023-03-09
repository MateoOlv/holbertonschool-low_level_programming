#include "main.h"
/**
 *_atoi - function that convert a string to an integer
 *@s: string to convert
 *Return: the string converted into a integer
 */
int _atoi(char *s)
{
int a = 0;
unsigned int b = 0;
int polo = 1;
int trufal = 0;

	while (s[a])
	{
	if (s[a] == '-')
	{
		polo *= -1;
	}
	while (s[a] >= '0' && s[a] <= '9')
	{
		b = (b * 10) + (s[a] - '0');
		a++;
		trufal = 1;
	}
	if (trufal == 1)
	{
	break;
	}
	a++;
	}
	b *= polo;
	return (b);
}
