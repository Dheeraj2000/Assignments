#include<stdio.h>
void main()
{	
	for(int i=1,c=0;i<=6;i++)
	{		
		for(int j=1;j<=i;j++)
		{	
			c+=j;
			printf("%d ",c);
		}
		printf("\n");
	    c=0;
    }
}



