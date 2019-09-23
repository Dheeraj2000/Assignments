#include<stdio.h>
void main()
{
float a,b,c,d,mid1,mid2;
printf("Enter first coordinate (a,b)");
scanf("%f %f",&a,&b);
printf("Enter sencond coordinate (c,d)");
scanf("%f %f",&c,&d);
mid1=(a+c)/2;
mid2=(b+d)/2;
printf("Mid point (%0.2f,%0.2f)",mid1,mid2);
}

