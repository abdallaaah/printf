#include "main.h"

/**
 * _printnumbers - prints an integer
 * @m: int printed
 */
void _printnumbers(int m)
{
if (m < 0)
{
_putchar('-');
m = -m;
}
if ((m / 10) > 0)
{
_printnumbers(m / 10);
}
_putchar((m % 10) + 48);
}
