/*5.Arrays and string.
    2.Matrix addition:= Write a C++ program to perform matrix addition on two 2x2 matrices.
    objectives:= Practice multi-diamensional arrays.
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,row,col,b,ans;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"\nEnetr the element of b["<<i<<"] = ";
			cin>>b[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			ans[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"\nThe addition of array = "<<ans[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
