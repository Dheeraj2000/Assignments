#include<stdio.h>
void main()
{
int a,b;
printf("Complex number given is a+bi");
printf("Enter the value of a and b");
scanf("%d %d",&a,&b);
if(a!=0&&b!=0)
printf("Complex number is %d+%di",a,b);
else
if(a==0&&b!=0)
printf("Complex number is %di",b);
else
if(a!=0&&b==0)
printf("Complex number is %d",a);
else
if(a==0&&b==0)
printf("Complex number is 0");
}
