/*5.Arrays and string.
	2.Matrix addition:= Write a C++ program to perform matrix addition on two 2x2 matrices.
	objectives:= Practice multi-diamensional arrays.
*/
#include <iostream>
using namespace std;
int main()
{
	int a[100][100], b[100][100], ans[200][200], i, j, row, col;

	cout << "\nEnter the row number = ";
	cin >> row;

	cout << "\nEnter the column number = ";
	cin >> col;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << "\nEnter the element of a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << "\nEnter the element of b[" << i << "][" << j << "] = ";
			cin >> b[i][j];
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			ans[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << "\nThe addition of an array = \n";
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
