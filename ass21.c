// Program Assignment 2 Q2
// Program to find area of triangle
// Using sqrt root function
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,s,q,Result;
printf("Enter the value of a,b,c");
scanf("%f  %f  %f",&a,&b,&c);
s=(a+b+c)/2;

q=(s*(s-a)*(s-b)*(s-c));

Result=sqrt(q);
printf("Area of Triangle=%f",Result);

}


