#include <stdio.h>
void print_alphabet(void);
void print_alphabet(void)
{
    	char letter;
    	for(letter = 'a'; letter <= 'z'; letter++)
    	{
        	putchar(letter);
    	}
	putchar('\n');
}
