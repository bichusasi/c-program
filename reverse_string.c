#include<stdio.h>
#include<string.h>
int main()
{
 char str[30],temp;
 int i,j,len;
 printf("Enter the string:");
 scanf("%[^\n]",str);
 for (len=0;str[len]!='\0';len++);
 {
  printf("length is %d\n",len);
  i=len-1;
  for (j=0;j<len/2;j++)
  { 
   temp=str[i];
   str[i]=str[j];
   str[j]=temp;
   i--;
  }
 }
  printf("reversed string is:%s\n",str);
  return 0;
}
  
  
