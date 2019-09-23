//ASSIGNMENT 6 ANS17
#include<stdio.h>
int main()
{
int i,j,a=0;
for(j=1;j<=6;j++)
{
for(i=1;i<=j;i++)
{
printf("%c",64+j);
}
for(i=1;i<=6-j;i++)
{
if(j==1)
{
printf("%c",65+i);
}
{
if(j==2)
printf("%c%c",64+i+j,64+i+j);
}
{
if(j==3)
printf("%c%c%c",64+i+j,64+i+j,64+i+j);
}
{
if(j==4)
printf("%c%c%c%c",64+i+j,64+i+j,64+i+j,64+i+j);
}
{
if(j==5)
printf("%c%c%c%c%c",70,70,70,70,70);
}


if(j==6)
{
break;
}
}
printf("\n");

}

}
