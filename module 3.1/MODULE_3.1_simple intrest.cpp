# include <stdio.h>

float principal, rate, time, interest;
int main()
{
	printf("TO FIND SIMPLE INTEREST:\n");

    printf("Enter the principal: ");
    scanf("%f", &principal);

    printf("Enter the rate: ");
    scanf("%f", &rate);

    printf("Enter the time: ");
    scanf("%f", &time);

    interest = principal * rate * time / 100;
    printf("The Simple interest is %f", interest);

}

	
