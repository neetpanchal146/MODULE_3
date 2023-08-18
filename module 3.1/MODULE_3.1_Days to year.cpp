#include<stdio.h>
int choice , days , years;
int remain;
main()
{
	printf("Enter 'D' for years to days\nEnter 'Y' for days to years\n");
	scanf("%c",&choice);
	
	if(choice=='D'|| choice=='d')
	{
		printf("Enter number of year\n");
		scanf("%d",&years);
        days = years * 365;
        printf("number of days are %d",days);
		
	}
	if(choice=='Y'|| choice=='y')
	{
	    printf("Enter number of days\n");
		scanf("%d",&days);
		years = days/365;
		printf("number of years is %d\n",years);
		
		/*printf("To find out remaning day enter number of days again\n");
		scanf("%d",&days);
		remain = days%365;
		printf("remaining days are %d",remain);
		*/
	}
	
	
}