#include<stdio.h>
int year;
main()
{
	printf("Enter a year to find out it is a leap year or not\n");
	scanf("%d",&year);
	
	if(year/4 && year/400)
	{printf("These is a Leap Year\n");}
	
	else
	{printf("Not a Leap Year");}
	
	
}