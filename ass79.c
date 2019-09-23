//Assignment 7 Q9
//Multiplication and division of a complex number
//Using Operators

#include<stdio.h>
int main()
{
float a,b,c,d,complex1,complex2,e,f,g,h;
printf("enter the numbers:");
scanf("%f%f%f%f",&a,&b,&c,&d);
printf("complex1: %0.4f + %0.5fi",a,b);
printf("\ncomplex2: %0.6f + %0.6fi",c,d);
g=a*c-b*d;
h=a*d+b*c;
e=((a*c)+(b*d))/((c*c)+(d*d));
f=((b*c)-(a*d))/((c*c)+(d*d));
printf("\nMultiplication of complex number=%f+%fi",g,h);
printf("\ndivision of complex numbers is: %f + %fi",e,f);
}



































