//Assignment 4 Q3
/*Program to print all even no less 
  than 50 and all odd no b/w more than 50*/
//Using for loop
#include<stdio.h>
void main()
{
int i,a;
printf("All Even no less than 50 are\n");
for(i=0;i<=50;i=i+2)
{
printf(" %d ",i);
}
printf("Odd no more than 50");
for(a=51;a!=52;a=a+2)
printf(" %d ",a);
}
