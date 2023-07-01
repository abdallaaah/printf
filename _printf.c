#include "main.h"
/**
 * _printf - the main control function to control every thing
 * @format: the first arg in va_list
 * Return: number of printed
 */
int _printf(char *format, ...)
{
int num_integ = 0;
va_list args;
unsigned int character, yy;
char *string = NULL;
int y, z = 0, num = 0, i = 0;
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
num++;
character = va_arg(args, int);
_putchar(character);
break;
case 's':
string = va_arg(args, char *);
if (string == NULL)
{
printf("string is null");
break;
}
while (string[z] != '\0')
{
num++;
_putchar(string[z]);
z++;
}
z = 0;
break;
case 'd':
y = va_arg(args, int);
num = _printnumbers(y, num_integ);
break;
case 'i':
yy = va_arg(args, long int);
num = _printnumbers(yy, num_integ);
break;
case 'l':
y = va_arg(args, int);
num = _printnumbers(y, num_integ);
break;
default:
num++;
_putchar(format[i]);
break;
}
}
else
{
num++;
_putchar(format[i]);
}
i++;
}
va_end(args);
return (num);
}
