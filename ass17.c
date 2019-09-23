//Program Q7
//To find sum of last two digit
//Using Operators
#include<stdio.h>
void main()
{
int a,b;
printf("Enter Number");
scanf("%d",&a);
b=a%10+(a%100)/10;
printf("Sum of last two digit =%d",b);

}
