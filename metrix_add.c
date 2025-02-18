#include<stdio.h>
int main()
{
 int i,j,r1,c1,r2,c2,n[20][20];
 printf("Enter the rows and colums of first metrix:");
 scanf("%d%d,",&r1,&c1);
 
 int a[r1][c1];
 printf("Enter the elements of first metrix:\n");
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
   scanf("%d",&a[i][j]);
 }
 }
 printf("Enter the rows and colums of second metrix:");
 scanf("%d%d",&r2,&c2);
 int b[r2][c2];
 printf("Enter the elements of second metrix:\n");
 for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 if(r1==r2&&c1==c2)
 {
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   {
    n[i][j]=a[i][j]+b[i][j];
   }
  } 
 }
 else{
 printf("NOT POSSIBLE!");
 }
 printf("sum of metrix is:\n");
 for (i=0;i<r1;i++)
 {
  for (j=0;j<c1;j++)
  { 
   printf("%d\t",n[i][j]);
  }
  printf("\n");
 }
 return 0;
 }
 
