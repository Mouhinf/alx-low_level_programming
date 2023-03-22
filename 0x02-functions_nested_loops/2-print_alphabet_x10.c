#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
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
