//ASSIGNMENT 6 Q9
#include<stdio.h>
int main()
{
int i,j,a=0;
for(j=1;j<=5;j++)
{
if(j==3)
{
a=a+1;
}
else
if(j==4)
{
a=a+2;
}
else
if(j==5)
{
a=a+3;
}

for(i=1;i<=-1+2*j+a;i++)
{
printf("%c",65);
}
printf("\n");
}
}









