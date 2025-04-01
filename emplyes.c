#include<stdio.h>
struct Employee{
	char name[50];
	int id;
	float salary;
	};
	int main()
		{
		int i,n;
		printf("Enter the number of employees :\n");
		scanf("%d",&n);
		struct Employee emp[n];
		for(i=0;i<n;i++)
			{
			printf("\nEnter the details of employee%d:\n",i+1);
			printf("Name :");
			scanf("%s",emp[i].name);
			printf("I.D number :");
			scanf("%d",&emp[i].id);
			printf("Salary :");
			scanf("%f",&emp[i].salary);
			}
			for(i=0;i<n;i++)
				{
				 printf("\nDetails of employees\n");
			 	 printf("Name : %s\t\n",emp[i].name);
			 	 printf("I.D number : %d\t\n",emp[i].id);
			 	 printf("Salary : %f\t\n",emp[i].salary);
			 	 }
			 	 return 0;
			 	 }
				
