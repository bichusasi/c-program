#include <stdio.h>
	struct student
	{
	 int a;
	 char b[20];
	 float c;
	}n;
	union Student
	{
	 int d;
	 char e;
	 float f[20];
	}s;
	int main()
	{
	 printf("size of structure : %ld bytes\n",sizeof(n));
	 printf("size of union : %ld bytes\n",sizeof(s));
	 return 0;
	 }
	 
 
