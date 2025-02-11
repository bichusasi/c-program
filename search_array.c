#include <stdio.h>
int main()
{
 int i,n,key=0,flag=0,pos;
 printf("Enter array size:");
 scanf("%d",&n);
 int a[n];
 printf("Enter elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the value to search:");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
 if (key==a[i])
 {
 flag=1;
 pos=i;
 break;
 }
 }
 if (flag==0)
 {printf("The element is not found!\n");
 }
 else
 {
 printf("element %d is found at position %d\n",key,pos);
 }
return 0;
}
