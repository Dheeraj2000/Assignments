#include<stdio.h>
void main()
{
   int i,j,k,l;
   for(i=0;i<=4;i++)
   {	
    for(j=0;j<=4-i;j++)
     printf(" ");
     for(k=0;k<i+1;k++)
     printf("%c",65+k);
     for(l=i-1;l>=0;l--)
     printf("%c",65+l);
     printf("\n");
   }
   
}		
