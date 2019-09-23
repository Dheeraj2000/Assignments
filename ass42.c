//Assignment 4 Q2
/*Program to print all number b/w 20 to 40 
 and all even no b/w 50 to 80*/
//Using for loop
#include<stdio.h>
void main()
{
int a,i;
printf("All no b/w 20 to 40");
printf("\n");
for(i=20;i<40;i++)
{
printf(" %d ",i);
}
printf("\n");
printf("All Even no b/w 50 to 80");
printf("\n");
for(a=50;a<80;a=a+2)
printf(" %d ",a);
}
