/*5.Arrays and Strings:
	1.Array sum and average:= Write a c++ program that accepts an array of integers, calculates the sum and average and display the results.
	Objectives:= Understand basic array manipulation.
*/
#include <iostream>
using namespace std;
int main()
{
	int size, a[100], b[100], ans[100], sum = 0, i;
	cout << "\nEnter the size of an array = ";
	cin >> size;
	for (i = 0; i < size; i++)
	{
		cout << "\nEnter the element of an array a[" << i << "] = ";
		cin >> a[i];
	}
	for (i = 0; i < size; i++)
	{
		cout << "\nEnter vthe element of an array b[" << i << "] = ";
		cin >> b[i];
	}
	for (i = 0; i < size; i++)
	{
		ans[i] = a[i] + b[i];
	}
	for (i = 0; i < size; i++)
	{
		cout << "\nThe addition = " << ans[i];
	}
	for (i = 0; i <= size; i++)
	{
		sum += ans[i];
	}

	cout << "\nThe addition of an array = " << sum;

	cout << "\nThe avrage of an aaray = " << (float)sum / (float)size;

	return 0;
}