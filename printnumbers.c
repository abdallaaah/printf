#include "main.h"

/**
 * _printint - prints an integer
 * @m: int printed
 */
void _printint(int m)
{
if (m < 0)
{
_putchar('-');
m = -m;
}
if ((m / 10) > 0)
{
_printint(m / 10);
}
_putchar((m % 10) + 48);
}
