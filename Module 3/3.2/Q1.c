//WAP to make simple calculator(operation include addition,subtraction,Multiplication,Division)
#include<stdio.h>
int main()
{
	int i,j,k,sum=0,sub=0,multi=1;
	printf("\nEnter amount of digit = ");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		printf("\nEnter %d number = ",i);
		scanf("%d",&j);
		sum=multi*j;
		multi=multi*j;
	}
	printf("\nAddition  = %d",sum);
	printf("\nMultiplication  = %d",multi);
	return 0;n
}
