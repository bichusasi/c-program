#include <stdio.h>
int main()
{
 int a=10;
 int *p,**q;
	p = &a;
	q = &p;
	printf("Value of a : %d\n",a);
	printf("Value of *p : %d\n",*p);
	printf("Value of **q : %d\n",**q);
	**q+=5;
	printf("Value of a : %d\n",a);
	printf("Value of *p : %d\n",*p);
	printf("Value of **q : %d\n",**q);
	return 0;
	}
