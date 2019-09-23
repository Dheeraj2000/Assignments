#include<stdio.h>
void main()
{
int i,n,x,y,sum=0;

printf("Enter the no of pairs");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter two pairs (x,y)");
scanf("%d %d",&x,&y);
sum=sum+x*y;
}
printf("Sum of %d pairs=%d",n,sum);
}
