//Assignment 2 Question 3
//Program to find area of triangle , coordinate are given
//Using sqrt and pow function
#include<stdio.h>
void main()
{
float x1,x2,x3,y1,y2,y3,Area;
printf("Enter the value of x1,y1");
scanf("%f  %f",&x1,&y1);
printf("Enter the value x2,y2");
scanf("%f %f",&x2,&y2);
printf("Enter the value x3,y3");
scanf("%f %f",&x3,&y3);
Area=( x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2;
printf("Area of Triangle given coordinate=%f",Area);

}
