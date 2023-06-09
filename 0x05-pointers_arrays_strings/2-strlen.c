#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: Pointer to a string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i += 1;
		s++;
	}
	return (i);
}
