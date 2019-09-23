#include<stdio.h>
#include<math.h>
void main()
{
    int n,i;
    float sum=0,x=0,a;
    printf("enter the number n:");
    scanf("%d",&n);
    printf("enter the %d numbers: ",n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&a);
        x=x+pow(a,2);
    }
        sum=sum+sqrt(x);
    

    printf("\n%0.3f",sum);
}















