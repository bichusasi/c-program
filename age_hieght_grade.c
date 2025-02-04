#include<stdio.h>
int main()
{
int age,roll_no;
float height;
char grade;
printf("Enter roll number:");
scanf("%d",&roll_no);
printf("Enter age:");
scanf("%d",&age);
printf("Enter height:");
scanf("%f",&height);
printf("Enter your grade:");
scanf(" %c",&grade);
printf("The roll number is:%d\n",roll_no);
printf("The age is:%d\n",age);
printf("Your height is:%f\n",height);
printf("Your grade is:%c\n",grade);
return 0;
}
