#include "main.h"
/**
 *times_table - main func
 *Return: nothing
 *
 *
 */
void times_table(void)
{
int line;
int column;
int res;
for (line = 0; line <= 9; line++)
{
for (column = 0; column <= 9; column++)
{
res = line * column;
if (column == 0)
{
_putchar('0');
}
else if (res < 10)
{
_putchar(' ');
_putchar(res + '0');
}
else
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
if (column < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
