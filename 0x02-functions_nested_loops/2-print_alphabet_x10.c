#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Return: void
 */
void print_alphabet(void);
void print_alphabet_x10(void)	
{
	int i = 1;
	for (i = 1; i <= 10; i++)
	{
        	char letter;

        	for (letter = 'a'; letter <= 'z'; letter++)
        	{
                	_putchar(letter);
       	 	}
       		_putchar('\n');
	}
}
