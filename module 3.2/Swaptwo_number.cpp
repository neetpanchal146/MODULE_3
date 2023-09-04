#include<stdio.h>
int num1 = 10;
int num2 = 15;

int Swap(int one ,int two)
{
	 num1 = two;
	 num2 = one;
}
int main()
{	
	Swap(num1 , num2);
	printf("%d \n%d",num1,num2);
}