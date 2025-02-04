#include<stdio.h>
int main()
{
int fact=1,i=1;
int num;
printf("Enter number:");
scanf("%d",&num);
if (num>0)
{
 while (i<=num)
 {
 fact*=i;
 i++;
 }
printf("%d is the factorial\n",fact);
}
else
{
printf("Enter positive number!\n");
}

return 0;
}
