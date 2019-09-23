/*Program Q8 
To double the last digit
 assume last digit is less than 5*/
#include<stdio.h>
void main()
{
int a,b;
printf("Enter number");
scanf("%d",&a);
b=a + a%10;
printf("The New Number=%d",b);
}
