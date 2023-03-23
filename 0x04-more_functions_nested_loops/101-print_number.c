#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
    	int digit, power, is_negative;

    	if (n == 0)
	{
        	_putchar('0');
        	return;
    	}

    	is_negative = n < 0;
    	if (is_negative)
	{
       
        	_putchar('-');
       	 	n = -n;
    	}

    	for (power = 1; power <= n; power *= 10)
	{
      
    	}
    	power /= 10;

    	while (power > 0)
	{
        	digit = n / power;
        	_putchar(digit + '0');
        	n -= digit * power;
        	power /= 10;
    	}
}

