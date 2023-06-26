#include "main.h"
/**
 * _printf - the main control function to control every thing
 * @format: the first arg in va_list
 * Return: number of printed
 */
int _printf(char *format, ...)
{
va_list args;
unsigned int character;
char *string;
int z = 0, num = 0, i = 0;
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
while (string[z] != '\0')
{
num++;
_putchar(string[z]);
z++;
}
z = 0;
break;
default:
num++;
_putchar(format[i]);
break;
}}
else
{
num++;
_putchar(format[i]);
} i++;
} va_end(args);
return (num);
}
