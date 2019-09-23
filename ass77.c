//Assignment 7 Q7
//Program to print cross product of vectors
//Using 
#include<stdio.h>
void main()
{
int a,b,c,x,y,z,cross1,cross2,cross3;
printf("Enter first vector (ai+bj+ck)");
scanf("%d %d %d",&a,&b,&c);
printf("Enter second vector (xi+yj+zk)");
scanf("%d %d %d",&x,&y,&z);
cross1=b*z-y*c;
cross2=-a*z+x*c;
cross3=a*y-b*x;
printf("Cross Product of Vectors=%di+%dj+%dk",cross1,cross2,cross3);
}
