#include<stdio.h>
struct Employe{
	int Employe_Number = 14;
	char Employe_Name[50] = "Neet Panchal";
	char Employe_Addrese[100] = "Jaipur";
	int Employe_Age = 21;
};

int main(){
	struct Employe emp;
	printf("Employe Number = %d\n",emp.Employe_Number);
	printf("Employe Name = %s\n",emp.Employe_Name);
	printf("Employe Addrece = %s \n",emp.Employe_Addrese);
	printf("Employe Age = %d", emp.Employe_Age);
}