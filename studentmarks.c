#include <stdio.h>
struct student
    {
    char name[50];
    int roll;
    float mark[3];
    };
int main()
{
int n,i,j;
printf("Enter the number of students:");
scanf("%d",&n);
struct student std[n];
for (i=0;i<n;i++)
    {
    printf("\nEnter student name:");
    scanf("%s",std[i].name);
    printf("\nEnter student roll number:");
    scanf("%d",&std[i].roll);
    printf("\nEnter the marks ofr maths,computer,physics");
    for (j=0;j<3;j++)
        {
        scanf("%f",&std[i].mark[j]);
        }
    }
for (i=0;i<n;i++)
    {
    int avg,total=0;
    printf("\nStudent name:%s",std[i].name);
    for (j=0;j<3;j++)
        {
        total=total+std[i].mark[j];
        }
    printf("\nTotal marks=%d",total);
    avg=total/3;
    printf("\nAverage=%d",avg);
    }
return 0;
}
