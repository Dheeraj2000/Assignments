//Assignment 3 Q5
//Program to find slope of line and whether it is vertical or not
//Using if else condition
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,slope;
printf("Given equation of line is ax+by+c");
printf("Enter the value of a,b,c");
scanf("%f %f %f",&a,&b,&c);
slope=-a/b;
printf("Slope of line is %f\n",slope);

if(b==0)
printf("Line is vertical");
else
printf("Line is not vertical");
}
