//ASSIGNMENT 6 Q16
#include<stdio.h>
int main()
{
int i,j,a=0;
for(j=1;j<=6;j++)
{
for(i=1;i<=7-j;i++)
{
printf("%c",65-j+j*i);
}
printf("\n");

}

}
