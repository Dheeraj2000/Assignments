#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,unit1,unit2,unit3;
printf("Enter Vector (ai+bj+ck)");
scanf("%f%f%f",&a,&b,&c);
unit1=a/sqrt(a*a+b*b+c*c);
unit2=b/sqrt(a*a+b*b+c*c);
unit3=c/sqrt(a*a+b*b+c*c);
printf("Unit Vector (%0.2f,%0.2f,%0.2f)",unit1,unit2,unit3);
}

