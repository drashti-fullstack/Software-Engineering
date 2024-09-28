//WAP to find simple interest
#include<stdio.h>
int main()
{
	int n;
	float p,s,r;
	printf("\nEnter the principle value = ");
	scanf("%f",&p);
	printf("\nEnter the rate = ");
	scanf("%f",&r);
	printf("\nEnter the number of years = ");
	scanf("%d",&n);
	s=((p*r*n)*0.01);
	printf("\nThe simple-Interest is = %,3f",s);
	return 0;
}
