//Program of Assignment 2 Question 2
//Program to Find ditance between two points
//Using Square root function
#include<stdio.h>
#include<math.h>
void main()
{
float x1,x2,y1,y2,R,Result;
printf("Enter the value of cordinate (a,b)");
scanf("%f  %f",&x1,&y1);
printf("Enter the value of cordinate (c,d)");
scanf("%f  %f",&x2,&y2);
R=pow((x2-x1),2)+pow((y2-y1),2);
Result=sqrt(R);
printf("Distance between two points=%f",Result);

}
		
