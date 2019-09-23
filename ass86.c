//Assignment 8 Q6

#include<stdio.h>
void main()
{
int a,sum=0,i,n,n1,n2;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    n1=a%10;
    n2=((a/10)%10);
    sum=sum+((a-n1-(10*n2))+((10*n1)+n2));
}
printf("%d",sum);
}


