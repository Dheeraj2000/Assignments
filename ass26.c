//Assignment 2 Question 6
//Program to find center and radius of circle
//Using sqrt function
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d;
printf("The Given equation of cicle is x");
printf("Enter the value of a,b,c");
scanf("%f %f %f",&a,&b,&c);
printf("center of circle=(%f,%f)",-a/2,-b/2);
d=sqrt(pow(a/2,2)+pow(b/2,2)-c);
printf("Radius of Circle=%f",d);

}
