#include<stdio.h>


 main()
{
int i,j, k=1;

for(i=1;i<6;i++)
{
for(j=0;j<i;j++)
{
printf("  %d",k++);

}
printf("\n");
}

}