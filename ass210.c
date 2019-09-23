//Assignment 2 Q10
//Program to find length of chord of circle intersected by line
//Using sqrt and Operators
#include<stdio.h>
#include<math.h>
void main()
{
float h,k,r,s,dis,len1;
printf("Enter Center of circle (h,k)");
scanf("%f %f",&h,&k);
printf("Enter radius of circle r");
scanf("%f",&r);
printf("Given line is x=s\n");
printf("Enter value of s");
scanf("%f",&s);
dis=(h-s);
len1=2*sqrt(r*r-dis*dis);
printf("Length of chord of circle intersected by the line%f",len1);
}

