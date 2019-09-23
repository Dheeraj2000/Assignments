#include<stdio.h>
void main()
{
int y,x;

for(y=0;y<=4;y++)
{
for(x=0;x<=20;x++)
{
if((y%2==0)||(y%2!=0&&x%5==0))
printf("*");
else
printf("0");
}
printf("\n");
}

}
