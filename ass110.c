//Program Q10
//Program eo exchange last two digits
//Using Operators
#include<stdio.h>
void main()
{
int a,b,c,d,e,f;
printf("Enter Number");
scanf("%d",&f);
a=f%100;
b=f%10;
c=f-a;
d=a/10;
e=c+b*10+d;
printf("The Digit after exchanging=%d",e);
}
