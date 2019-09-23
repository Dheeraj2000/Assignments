//Assignment 3 Q6
//Program to find roots of Quadratic equation
//Using if else condition and sqrt function
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,r1,r2,z,r11,r22,D1,D2;
printf("Given Quadratic eq is ax^2 + bx+c");
printf("Enter the values of a,b,c");
scanf("%f %f %f",&a,&b,&c);

D1=(b*b-4*a*c);
D2=sqrt(-(b*b-4*a*c));
r1=(-b+sqrt((b*b)-(4*a*c)));
z=2*a;
r11=r1/z;
r2=(-b-sqrt((b*b)-(4*a*c)));
r22=r2/z;

if(r11!=r22&&D1>0)
printf("Roots are %f  %f",r11,r22);
else
if(D1<0)
printf("Roots are %f %f %f",-b/2,D2/2,-D2/2);
else
if(r11==r22)
printf("Roots are %f",r11);
}

