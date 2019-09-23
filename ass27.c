//Assignment 2 Queston 7
//Program to find point fo intersection of lines
//Using Operators
#include<stdio.h>
void main()
{
float a,b,c,p,q,r,x,y;
printf("Given 1st equation ax+by+c");
printf("Enter the values a,b,c");
scanf("%f %f %f",&a,&b,&c);
printf("Given 2nd equation px+qy+r");
printf("Enter the value p,q,r");
scanf("%f %f %f",&p,&q,&r);
x=(b*r-c*q)/(a*q-b*p);
y=(a*r-p*c)/(b*p-a*q);
printf("Intersection points of lines are=(%f,%f)",x,y);

}

