#include <stdio.h>
#define pi 3.142
#define area_of_circle(r)(pi*r*r)
#define surface_area_of_cylinder(r,h)(2*pi*r*(r+h))
int main()
{
 float r,h,area,surface_area;
 printf("Enter the redius :");
 scanf("%f",&r);
 printf("Enter the hieght of cylinder :");
 scanf("%f",&h);
 area = area_of_circle(r);
 surface_area = surface_area_of_cylinder(r,h);
 printf("the area of circle is : %.2f",area);
 printf("\nThe surface area of cylinder is : %.2f\n",surface_area);
 return 0;
 }
 
