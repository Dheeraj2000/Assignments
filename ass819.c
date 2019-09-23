//Assignment 8 Q19

#include<stdio.h>
void main()
{
int a,b=0,i,n,x=0,sum=0;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if(x==1)
       sum=sum+a;
    if(a%2==0)
       x=1;
}
printf("%d",sum);
}





