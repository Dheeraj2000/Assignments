//Assignment 3 Q3
//bigger number out of 2 which is bigger print first
//Using If else condition
#include<stdio.h>
void main()
{
float a,b;
printf("Enter two numbers a,b");
scanf("%f %f",&a,&b);
if(a>b)
{
printf("a is greatest number%f\n",a);
printf("Second number is %f",b);
}
if(b>a)
{
printf("b is greatest number%f\n",b);
printf("Sencond number is %f",a);
}
}
