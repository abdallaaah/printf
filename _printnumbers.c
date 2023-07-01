#include "main.h"
/**
 * _printnumbers - prints an integer
 * @m: int printed
 * Return: it is void no return
 */
int _printnumbers(int m, int count)
{
int copied_num;
copied_num = m;
if (count == 0)
{
if (copied_num == 0)
{
count = 1;
}
else
{
while (copied_num != 0)
{
copied_num = copied_num / 10;
count++;
}
}
}
if (m < 0)
{
count++;
_putchar('-');
m = -m;
}
if ((m / 10) > 0)
{
 _printnumbers(m / 10, count);
}
_putchar((m % 10) + 48);
return (count);
}


