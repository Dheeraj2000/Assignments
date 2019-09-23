//Assignment 3 Q8
//Program to print different no out of 3 no, two are same
//Using if else condition
#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 numbers");
scanf("%d %d %d",&a,&b,&c);
if(a==b&&a!=c&&b!=c)
printf("Different no is %d",c);
else
if(b==c&&c!=a&&b!=a)
printf("Different no is %d",a);
else
printf("Different no is %d",b);
}
