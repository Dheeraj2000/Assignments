//ASSIGNMENT 6 Q11
////ASSIGNMENT 6 Q11
/*ABCDEF
   ABCDE
    ABCD
     ABC
      AB
       A*/

#include<stdio.h>
int main()
{
int i,j,a=0;
for(j=1;j<=6;j++)
{
if(j>=2)
{
a=a+1;
}
for(i=1;i<=j;i++)
{
printf(" ");
}
for(i=1;i<=7-j;i++)
{
printf("%c",64+i+a);
}
printf("\n");

}

}
















