#include<stdio.h>
void main()
{
	int i,j,a=4;
	for(i=7,a=4;i>0;i--,a++)
	{
		for(j=0;j<=30;j+=a)
			printf("%d,",j);
		printf("\n");
	}
}