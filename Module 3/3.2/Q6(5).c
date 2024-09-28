/*Wap To Print Pattern
        *
      * * *
    * * * * *
  * * * * * * * 
* * * * * * * * *
*/
#include<stdio.h>
int main()
{
	int i,j,row,d,spc;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	spc = row + 3;
	int temp = 1;
	for(i=1;i<=row;i++)
	{
		for(j=spc;j>=1;j--)
		{
			printf(" ");	
		}
		for(d=1;d<=temp;d++)
		{
			printf("* ");
		}
		printf("\n");
		temp = temp+2;
		spc = spc-2;
	}
	return 0;
}
