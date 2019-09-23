//Assignment 8 Q9

#include<stdio.h>
void main()
{
    int a,i,n,sum=0,num,even;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if(a%2==0)
    {
        even=a;
    }
    else
    {
     num=a;
     sum=sum+num;
    }
}
printf("%d",sum);
}


