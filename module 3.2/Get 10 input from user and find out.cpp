#include <stdio.h> 
 
int main() 
{ 
  int number[10]; 
  int i;
  int  even=0;
  int   odd=0;
  int total=0;
 
  for( i=0; i<10; i++ )
   { 
    printf( "Enter number : " ); 
    scanf( "%d", &number[i] ); 
 
    if( number[i]%2 == 0 ) 
      even=even+number[i];
     
    else 
      odd=odd+number[i]; 
  
     total= even + odd;
  } 
 
  printf( "Result: \n" ); 
  printf( "Sum of all odd numbers is : %d\n", odd); 
  printf( "Sum of all even numbers is : %d\n", even); 
  printf( "Sum of all 10 numbers is : %d\n", total);
 
} 