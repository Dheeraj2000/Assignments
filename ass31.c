//Assignment 3 Q1
//Program to find greatest number out of 3
//Using if else condition
#include<stdio.h>
void main()
{
float a,b,c;
printf("Enter 3 values a,b,c");
scanf("%f %f %f",&a,&b,&c);
if(a>b)
	if(a>c)
	printf("a is the greatest%f",a);
	else
	printf("c is the greatest%f",c);
else
if(b>c)
printf("b is the greatest%f",b);
else
printf("c is the greatest%f",c);
}
