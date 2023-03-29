#include "main.h"

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	if (*str != '\0')
	{
		puts(str);
	}
	else
	{
		puts("");
	}
}
