//Assignment 2 Q12
/*Program to find the Area of Triangle formed by
  intersection of line and circle points and centre*/
//Using if else condition
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,p,q,r,dis,disc,Area;
printf("Given line is ax+by+c=0");
printf("Enter the value of a,b,c");
scanf("%f %f %f",&a,&b,&c);
printf("Enter Center of Circle (p,q)");
scanf("%f %f",&p,&q);
printf("Enter Radius of circle");
scanf("%f",&r);
dis=(a*p+b*q+c)/sqrt(a*a+b*b);
disc=2*sqrt(r*r-dis*dis);
Area=0.5*(dis*disc);
if(dis<r)
{
printf("Area of Triangle=%f",Area);
printf("Length of Chord=%f",disc);
}
else
if(dis>r)
{
printf("No Intersection");
}
}

