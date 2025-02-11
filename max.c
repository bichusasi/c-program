#include <stdio.h>
int main()
{
int i,n,max,min,p1=0,p2=0;
printf("Enetr array size:");
scanf("%d",&n);
int a[n];
printf("Enter elements:");
for (i=0;i<n;i++)
{scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for (i=1;i<n;i++)
{
if (a[i]>max)
{
 max=a[i];
 p1=i;
}
if (a[i]<min)
{
 min=a[i];
 p2=i;
}
}
printf("maximum is %d in position at %d\n",max,p1);
printf("minimum is %d in position at %d\n",min,p2);
return 0;
}

