//Assignment 3 Q9
/*Write a Program which reads 5 no a,b,c,d,x Here
  a,b,c,d are distinct and x is equal to exactly
  one of a,b,c,d .The Program output which is equal
  to x*/
//Using if else condition
#include<stdio.h>
void main()
{
int a,b,c,d,x;
printf("Enter the values a,b,c,d");
scanf("%d %d %d %d",&a,&b,&c,&d);
printf("Enter the value of x");
scanf("%d",&x);
if(x==a&&x!=b&&x!=c&&x!=d)
printf("Same no is a=%d",a);
if(x==b&&x!=c&&x!=d&&x!=a)
printf("Same no is b=%d",b);
if(x==c&&x!=d&&x!=a&&x!=b)
printf("Same no is c=%d",c);
if(x==d&&x!=a&&x!=b&&x!=c)
printf("Same no is d=%d",d);
}
