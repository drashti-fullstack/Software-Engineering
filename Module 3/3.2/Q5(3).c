//WAP to print table up yo given numbers
#include<stdio.h>
int main()
{
	int a,i,j;
	printf("\nEnter the number = ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("\n%d*%d=%d",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
