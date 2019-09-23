#include<stdio.h>
void main()
{
   int i, j;
   for(j=0;j<4;j++)
   {
   for (i=0;i<=j;i++)
   printf("%c",65+j);
   }
}
