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

int check = 0, check2= 0;
/*
char *str = "I am a string !";
char *str2 = "I am a string2 !";
printf("Character:[%c]hello[%c]\n", 'H', 'h');
_printf("Character:[%c]hello[%c]\n", 'H', 'h');
printf("String:[%s][%s]\n", str, str2);
_printf("String:[%s][%s]\n", str, str2);
printf("length:[%d]\n", 899);
_printf("length:[%d]\n", 899);
check = printf("length:[%i]\n", 0x2a);
printf("check from orignal:[%d]\n",check);
check =_printf("length:[%i]\n", 0x2a);
printf("check from fake:[%d]\n",check);*/
check = printf("Let's print a simple sentence.\n");
printf("the origianl check :%d\n",check);
check2 = _printf("Let's print a simple sentence.\n");
printf("the fake check :%d\n",check2);
return (0);
}
