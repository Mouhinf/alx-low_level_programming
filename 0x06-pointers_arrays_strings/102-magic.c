#include <stdio.h>
/*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
int main(void)
{
	int a[] = {72, 69, 76, 79, 79};
	int *p = a;

	printf("a[2] =%d\n", *(p+2));
	return 0;
}
