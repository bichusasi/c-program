#include <stdio.h>
int ext_var = 10;
void fn()
	{
	 auto int a = 5;
	 static int s = 1;
	 
	 a++;
	 s++;
	 
	 printf("auto variable : %d\n",a);
	 printf("static variable : %d\n",s);
	 }
	 int main()
	 {
	  register int r = 3;
	   printf("ext variable is : %d\n",ext_var);
	   printf("register variable : %d\n",r);
	  fn();
	  fn();
	  fn();
	  return 0;
	  }
