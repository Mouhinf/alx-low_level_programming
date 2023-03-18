#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n;
	srand(time(NULL));
	n = rand();
	if (n < 0)
	{
		printf("%d is negative\n",n);
	}
	if (n == 0)
	{
		printf("%d is zero\n",n);
	}
	if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	return 0;
}
