//ASSIGNMENT 5 Q4
#include<stdio.h>
int main()
   {
      int x,y;
for(y=0;y<6;y++)
{
for(x=0;x<27;x++)
if((y%2==1&&x%12==1)||(y%2==1&&x%12==2)||(y%2==1&&x%12==4)||(y%2==1&&x%12==7)||(y%2==1&&x%12==8)||(y%2==1&&x%12==11))
printf("0");
else
printf("*");
printf("\n");
}   
return 0;
}
