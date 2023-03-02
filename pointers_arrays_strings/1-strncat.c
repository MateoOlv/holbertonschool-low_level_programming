#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int a;

		for (a = 0; a < n && src[a] != '\0'; a++)
		{		
		dest[a] = src[a];			
		}
		while (a < n)
		{
			a++;
			dest[a] = '\0';
		}

	return (dest);
}
