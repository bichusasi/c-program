#include <stdio.h>
int main()
{
char oper;
int num1,num2,result;
printf("Enter the first number:");
scanf("%d",&num1);
printf("Enter the second number:");
scanf("%d",&num2);
printf("Enter the operator:");
scanf(" %c",&oper);
switch (oper)
{
case '+':
 result = num1+num2;
 printf("result :%d",result);
 break;
case '-':
 result = num1-num2;
 printf("result :%d",result);
 break;
case '/':
 result = num1/num2;
 printf("result :%d",result);
 break;
case '%':
 result = num1%num2;
 printf("result :%d",result);
case '*':
 result = num1*num2;
 printf("result :%d",result);
 break;
default:
printf("error");
break;
}
return 0;
}
