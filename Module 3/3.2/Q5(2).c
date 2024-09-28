/*Looping programs:
2.WAP to take 10 no. Input from user and find out
--> How many even numbers are there ?
--> H/ow many odd numbers are there ? 
--> Sum of even numbers ?
--> Sum of odd numbers ? */
#include<stdio.h>
int main()
{
	int i,a esum=0,ecount=0,osum=0,ocount=0;
	for(i=1;i<=10;i++)
	{
		printf("enter %d number =",i);
		scanf("%d",&a);
		if(a%2==0)
		{
			ecount++;
			esum +=;
		}
		else 
		{
			ocount++;
			osum += a;
		}
	}
	printf("\nTotal number of even number is %d",ecount);
	printf("\nsum of even number is %d",esum);
	printf("\nTotal number of odd number is %d",ocount);
	printf("\nsum number of odd number id %d",osum);
	return 0;
}
