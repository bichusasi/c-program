#include<stdio.h>
int main()
{
int i=1,sum=0,num;
printf("Enter number:");
scanf("%d",&num);
while (num>0)
{
sum+=i;
i++;
num--;
}
printf("sum:%d\n",sum);
return 0;
}
