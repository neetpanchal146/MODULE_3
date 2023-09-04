#include<stdio.h> 
int main() 
{ 
int term1 = 0, term2 = 1; 
int number,nextTerm;  
printf("Enter the number of terms:\n");
scanf("%d",&number); 
printf("The First %d terms of Fibonacci series are :\n",number); 
for (int i=0; i<number; i++ ) 
{ 
 if (i<=1) 
 nextTerm = i; 
 else
{ 
 nextTerm = term1 + term2; 
 term1 = term2; 
 term2 = nextTerm; 
} 
  printf("%d\n",nextTerm); 
} 

} 