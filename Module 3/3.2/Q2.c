//WAP to swap two numbers without using third variable
#include<stdio.h>
int main()
{
	int p,q;
	printf("\nEnter the 1st value = ");
	scanf("%d",&p);
	printf("\nEntyer the 2nd value = ");
	scanf("%d",&q);
	p=p+q;
	q=p-q;
	p=p-q;
	printf("\nValues after swapping:\np = %d\nq = %d",p,q);
	return 0;
}
