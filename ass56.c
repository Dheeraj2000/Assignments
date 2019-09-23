//ASSIGNMENT 5 Q6
//Using for loop and if condition
#include<stdio.h>
int main()
   {
      int x,y;
for(y=0;y<4;y++)
{
printf("\n");
for(x=0;x<20;x++)
{
if((y%2==0&&x%5!=0)||(y%2==1&&x%5==0))
printf("*");
else
printf("0");
}
}   
return 0;
}
