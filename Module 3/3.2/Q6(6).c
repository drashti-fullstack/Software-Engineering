/*Wap to print this pattern
*
**
***
****
*****
****
***
**
*
*/
#include<stdio.h>
int main()
{
	int i,j,row,d;
	printf("enter row count = ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	int temp = row-1;
	for(i=1;i<row;i++)
	{
		for(d=temp;d>=1;d--)
		{
			printf("* ");
		}
		temp--;
		printf("\n");
	}
	return 0;
}
