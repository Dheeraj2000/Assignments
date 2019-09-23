//Assignment 8 Q15

#include<stdio.h>
void main()
{
int n,count=0,a,i;
  float b=0,ans;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if(a%2==0)
    {
        b=b+(i*a);
        count+=i;
    }
  ans=b/count;
}
printf("%.2f",ans);
}



