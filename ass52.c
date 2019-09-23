//Assignment 5 Q2
//Program to print picture
//Using for loop and if condition
#include<stdio.h>
void main()
{
int x,y;
for(y=0;y<10;y++)
{
for(x=0;x<20;x++)
{
if((x<8&&y<=2)||(x>=15&&y>=7))
printf("0");
else
printf("*");
}
printf("\n");
}   
}
































