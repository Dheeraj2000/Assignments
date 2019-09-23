//ASSIGNMENT 3 Q10
#include<stdio.h>
#include<math.h>
int main()
   {
      float a,b,c,d,x,A,B,C,D;
int SUM;
printf("enter five numbers in which a,b,c,d are distnct but x is equal to anyone=");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&x);
if(a==x)
{A=1;}
else 
{A=0;}
if(b==x)
{B=1;}
else 
{B=0;}
if(c==x)
{C=1;}
else 
{C=0;}
if(d==x)
{D=1;}
else
{D=0;}
SUM=A+B+C+D;
printf("Numbers equal to x=%d",SUM);
return 0;
}
