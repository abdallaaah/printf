#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char *str = "I am a string !";
char *str2 = "I am a string2 !";
printf("Character:[%c]hello[%c]\n", 'H', 'h');
_printf("Character:[%c]hello[%c]\n", 'H', 'h');
printf("String:[%s][%s]\n", str, str2);
_printf("String:[%s][%s]\n", str, str2);
printf("length:[%d]\n", 899);
_printf("length:[%d]\n", 899);
printf("length:[%i]\n", 0x2a);
_printf("length:[%i]\n", 0x2a);
return (0);
}
