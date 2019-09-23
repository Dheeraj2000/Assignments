#include<stdio.h>
void main()
{
    int a,n,i,sum=0;
    printf("\n input: enter the numbers:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("\n Enter %d Numbers",i);
    scanf("%d",&a);
    sum=sum+a;
    }
    printf("\n Sum=%d",sum);
}
