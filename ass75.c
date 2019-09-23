#include<stdio.h>
void main()
{
int a,b,c,x,y,z,dot;
printf("Enter first vector (xi+yj+zk)");
scanf("%d %d %d",&x,&y,&z);
printf("Enter second vector (ai+bj+ck)");
scanf("%d %d %d",&a,&b,&c);
dot=x*a+y*b+z*c;
printf("Dot Product=%d",dot);
}
