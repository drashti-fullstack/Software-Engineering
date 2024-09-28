//Write a program to make simple calculator(to make addition,substraction,multiplication,division and modulo)
#include<stdio.h>
int main()
{
	int n1,n2,sum,sub,multi,rem;
	float div;
	printf("\nEnter the first value = ");
	scanf("%d",&n1);
	printf("\nEnter the second value = ");
	scanf("%d",&n2);
	sum = n1+n2;
	sub = n1-n2;
	multi = n1*n2;
	div = n1/n2;
	rem = n1%n2;
	printf("\nAddition       = %d",sum);
	printf("\nsubtraction    = %d",sub);
	printf("\nMultiplication = %d",multi);
	printf("\nDivision       = %d",div);
	printf("\nRemainder      = %d",rem);
	
	return 0;
	
}
