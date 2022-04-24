#include "stdio.h"

int main(void)
{
	int n;
	int a[5];
	int *p;


	a[2] = 1024;
	p = &n;
	/**
	 * add your code here
	 * you aren't allowed to use a
	 * don't modify p
	 * only one statement is allowed
	 * not allowed to code anything else than this line of code
	 */
	p[5] = 98;
	/*...this will print 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
