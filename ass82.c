#include<stdio.h>
void main()
{
int a,sum=0,i,n;
printf("Enter the n value:");
scanf("%d",&n);
printf("Enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    sum=sum+((a%100)/10);
}
printf("%d",sum);
}

