//Assignment 8 Q16

#include<stdio.h>
void main()
{
int a,b=0,i,n,position=1;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if(a%2==0)
    {
        b=b+(position*a);
        position+=1;
    }
 
}
printf("%d",b);
}




