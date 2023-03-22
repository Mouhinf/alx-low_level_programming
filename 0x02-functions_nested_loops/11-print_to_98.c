#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void print_to_98(int n)
{
    	int i;
    	char buf[10];

    	if (n <= 98) 
	{
        	for (i = n; i <= 98; i++) 
		{
            		sprintf(buf, "%d", i);
            		write(STDOUT_FILENO, buf, strlen(buf));
            		if (i != 98)
                		write(STDOUT_FILENO, ", ", 2);
       	 	}
    	} 
	else 
	{
        	for (i = n; i >= 98; i--) 
		{
            		sprintf(buf, "%d", i);
            		write(STDOUT_FILENO, buf, strlen(buf));
            		if (i != 98)
                		write(STDOUT_FILENO, ", ", 2);
        	}
    	}
    	write(STDOUT_FILENO, "\n", 1);
}
