#include<stdio.h>
void main()
{
int a,b,c;
printf("Vector Given is  ai+bj+ck  ");
printf("Enter the value of a,b,c");
scanf("%d %d %d",&a,&b,&c);
if(a!=0&&b!=0&&c!=0&&b>0&&c>0)
printf(" Vector is %di+%dj+%dk",a,b,c);
else
if(a!=0&&b<0&&c>0)
printf(" Vector is %di%dj+%dk",a,b,c);
else
if(a!=0&&b>0&&c<0)
printf(" Vector is %di+%dj%dk",a,b,c);
else
if(a!=0&&b<0&&c<0)
printf(" Vector is %di%dj%dk",a,b,c);
else
if(a!=0&&b==0&&c<0)
printf(" Vector is %di%dk",a,c);
else
if(a!=0&&b==0&&c>0)
printf(" Vector is %di+%dk",a,c);
else
if(a!=0&&b<0&&c==0)
printf(" Vector is %di%dj",a,b);
else
if(a!=0&&b>0&&c==0)
printf(" Vector is %di+%dj",a,b);
else
if(a!=0&&b==0&&c==0)
printf(" Vector is %di",a);
else
if(a==0&&b!=0&&c==0)
printf(" Vector is %dj",b);
else
if(a==0&&b==0&&c!=0)
printf(" Vector is %dk",c);
else
if(a==0&&b==0&&c==0)
printf(" Vector is 0");
else
printf("Wrong Entry");
}
