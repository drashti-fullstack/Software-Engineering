/*5.Arrays and string.
	3. string palindrome check:= Write a c++ program to check if given string is a palindrome.
	objective:= Practice string operations.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str1, str2;
	int i, size;
	char temp;
	cout << "\nEnter the string-1 value : ";
	cin >> str1;

	str2 = str1;

	size = str1.length();

	for (int i = 0; i < size / 2; i++)
	{
		temp = str1[i];
		str1[i] = str1[size - 1 - i];
		str1[size - 1 - i] = temp;
	}

	cout << "\nOriginal string is = " << str2 << endl;
	cout << "\nRevers string is = " << str1 << endl;

	if (str1 == str2)
	{
		cout << "\nThe string value is pallindrome." << endl;
	}
	else
	{
		cout << "\nThe string value is not pallindrome" << endl;
	}
	return 0;
}