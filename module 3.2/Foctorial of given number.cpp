#include <stdio.h>
 
int main()
{
  int i, number, factorial = 1;
 
  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &number);
  for (i=1; i<=number; i++)
    factorial=factorial*i;
 
  printf("Factorial of %d = %d\n", number, factorial);
 
}

