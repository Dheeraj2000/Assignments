//Assignment 8 Q13

#include<stdio.h>
void main()
{
    int a,i,n,sum=0,num,even,count=0;
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
     count=count+1;
    }
}
printf("\n the average of odd numbers is: %d",sum/count);
}



