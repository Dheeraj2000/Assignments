//Assignment 5 Q1
// Program to print picture like
// *****************
// *0*0*0*0*0*0*0*0*0*0
// *****************
// *0*0*0*0*0*0*0*0*0*0
// *****************
// Using for loop and if condition
#include<stdio.h>
void main()
   {
int x,y;
for(y=0;y<5;y++)
{
for(x=0;x<20;x++)
{
if((y%2==0)||((x%2==0)&&(y%2==1)))
printf("*");
else
printf("0");
}
printf("\n");
}   

}




































