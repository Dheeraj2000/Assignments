//Assignment 4 Q8
/*Program to print all the numbers which 
  are either multiple of 3 or 5 not both*/
//Using for loop and if condition
#include<stdio.h>
void main()
{
int i;
for(i=1;i<=100;i++)
{
if(i%15==0)
printf("");
else
if(i%3==0||i%5==0)
printf(" %d ",i);
}
}
