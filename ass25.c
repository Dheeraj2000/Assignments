//Assignment 2 Question 5
//Program to find distance between point and line
//Using Power function and Operators
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,f,g,Result;
printf("Line given is cx+dy+e");
printf("Enter value of c,d,e");
scanf("%f %f %f",&c,&d,&e);
printf("/nEnter values of coordinates (a,b)");
scanf("%f %f",&a,&b);
f= a*c + b*d + e;
g=sqrt(c*c+d*d);
Result=f/g;
printf("Distance b/w point and line=%f",Result);

}



