//Assignment 3 Q2
//Program to find biggest number out of 4
//Using if else condition
#include<stdio.h>
void main()
{
float a,b,c,d;
printf("Enter 4 numbers a,b,c,d");
scanf("%f %f %f %f",&a,&b,&c,&d);
if(a>b)
	if(a>c)
		if(a>d)
		printf("a is the greatest number %f",a);
		else 
		printf("d is the greatest number %f",d);
	else
	if(c>d)
	printf("c is the greatest number %f",c);
	else
	printf("d is the greatest number %f",d);
else
if(b>c)
	if(b>d)
	printf("b is the greatest %f",b);
	else
	printf("d is the greatest number %f",d);
else
if(c>d)
printf("c is the greatest number %f",c);
else
printf("d is the greatest number %f",d);
}


