//Program Q9
//To Delete last second digit
//Using Operators
#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter Number");
scanf("%d",&a);
b=(a-a%100)/10;
c=b+a%10;
printf("The New Number=%d",c);
}

