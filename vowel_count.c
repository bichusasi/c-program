#include<stdio.h>
#include<string.h>
int main()
{
 char str[50];
 int i=0,j=0,count1=0,count2=0,len;
 printf("Enter the strng : ");
 scanf("%[^\n]",str);
 len=strlen(str);
 for (i=0;i<len;i++)
 { 
  if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
  {
   count1++;
   }
  else
  {
   count2++;
   }
  }
 printf("The number of vowels is : %d\n",count1);
 printf("The number of consonants is : %d\n",count2);
return 0;
}
