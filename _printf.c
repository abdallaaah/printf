#include "main.h"
/**
 * _printf - the main control function to control every thing
 * @format: the first arg in va_list
 * Return: number of printed
 */
int _printf(char *format, ...)
{
va_list args;
int i = 0;
unsigned int character;
char *string;
int z = 0;
int num = 0;
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
character = va_arg(args, int);
_putchar(character);
num++;
break;
case 's':
string = va_arg(args, char *);
while (string[z] != '\0')
{
_putchar(string[z]);
num++;
z++;
}
z = 0;
break;
}
}
else
{
_putchar(format[i]);
}
i++;
}
va_end(args);
printf("the number is %d\n", num);
return (num);
}
