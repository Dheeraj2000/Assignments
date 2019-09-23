//Assignment 7 Q10
//
#include<stdio.h>
int main()
{
float a,b,c,d;
printf("enter the numbers:");
scanf("%f%f%f",&a,&b,&c);
printf("line: %0.2fx + %0.2fy +%0.2f",a,b,c);
d=-c/a;
printf("\n point of intersection: (%0.2f,0)",d);
}
