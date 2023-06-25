#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _putchar - function use write to stout
 * @c: the char we will print
 * Return: numbers printed
 */
void _putchar(char c);
/**
 * _printf - the main control function to control every thing
 * @format: the first arg in va_list
 * Return: number of printed
 */
int _printf(char *format, ...);
#endif
