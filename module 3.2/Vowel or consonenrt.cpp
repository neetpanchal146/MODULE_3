#include <stdio.h>
int main()
{
	char vowel;
	printf("Enter Alphabet for check it is vowel or not \n");
	scanf("%c",&vowel);
	
	switch(vowel)
	{
	case 'a':
	case 'e': 
	case 'i':	 
	case 'o':
	case 'u':
	printf("Vowel");
	break;
	
	default:
	printf("It is Consonant");
	}

}