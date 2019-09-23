//Assignment 3 Q4
//Program to find whether angle A of triangle is 90 or not
//Using If condition
#include<stdio.h>
void main()
{
float a,b,c;
printf("Enter the side of triangle a,b,c");
scanf("%f %f %f",&a,&b,&c);
if(a*a==b*b+c*c)
printf("Angle A is 90");
else
printf("Angle A is not 90");
}
