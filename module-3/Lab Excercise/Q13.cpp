/*4. Functions and scope.
	 2. Factorial calculation using recursion:= Write a c++ program that factorial of a number using recursion.
	 objectives:= Understand recursion in hindi.
*/
#include <iostream>
using namespace std;
int factorial(int num)
{
	if (num != 0)
	{
		return num * factorial(num - 1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num;
	cout << "\nEnter the number for find a factorial = ";
	cin >> num;
	int ans = factorial(num);
	cout << "\nThe factorial of " << num << " is " << ans;
	return 0;
}
