//Assignment 4 Q6
/*Program to print all numbers which are either
  b/w 50 to 70, or less than 20,or more than 90*/
// Using for loop
#include<stdio.h>
void main()
{
int a;
printf("Numbers which are less than 20\n");
for(a=0;a<=20;a=a+2)
printf(" %d ",a);
printf("\n\nNumbers which are b/w 50 to 70\n");
for(a=50;a<=70;a=a+2)
printf(" %d ",a);
printf("\n\nNumbers which are more than 90\n");
for(a=90;a<=100;a=a+2)
printf(" %d ",a);
}
