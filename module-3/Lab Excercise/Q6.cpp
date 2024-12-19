/*2. Variables,Data types and operators
     2.Type conversion:= Write a C++ program that performs both implicite and explicit type conversions and prints and results.
     objectives:= practice type casting in C++.
*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"\nEnter the value of num1 = ";
	cin>>num1;
	cout<<"\nEnter the value of num2 = ";
	cin>>num2;
	num3=num1/num2;
	cout<<"\nThe division of the two number used for implicite = "<<num3;
	cout<<"\nThe division of the two number used for explicit = "<<(float)num1/(float)num2;
	return 0;
}
