//Assignment 2 Question 8
//Program to find angle of triangle
//Using Operators
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,AQ;
printf("Enter the sides of triangle a,b,c");
scanf("%f %f %f",&a,&b,&c);
d=acos((b*b + c*c -a*a)/(2*b*c));
AQ=(d*180)/3.14159265359;
printf("Angle A in Radian=%f",d);
printf("\nAngle A in Degree=%f",AQ);
}
