//WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	int d,y;
	printf("\nEnter the number of days = ");
	scanf("%d",&d);
	printf("\nEnter the number of years = ");
	scanf("%d",&y);
	printf("\nThe days into years = %d",(d/365));
	printf("\nThe years into days = %d",(y*365));
	return 0;
}
