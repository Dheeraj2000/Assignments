//ASSIGNMENT 5 Q7
#include<stdio.h>
int main()
   {
      int x,y;
for(y=0;y<11;y++)
{
for(x=0;x<20;x++)
if((y==1&&x>5&&x<11)||(y==9&&x>5&&x<11)||(y==2&&x>3&&x<13)||(y==8&&x>3&&x<13)||(y==3&&x>2&&x<14)||(y==7&&x>2&&x<14)||(y==4&&x>1&&x<15)||(y==6&&x>1&&x<15)||(y==5&&x>1&&x<15))
printf("*");
else
printf("0");
printf("\n");
}   
return 0;
}
