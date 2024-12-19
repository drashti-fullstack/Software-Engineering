/* 2. Variables,data types, and operatprs
      1. Variables andc constants:
         :=Write a C++ program that demonstrates the use of variables and constants.Create variables of different data types 
           and perform operations on them.
           objective:=Understand the difference between variables and constant.
*/
#include<iostream>
using namespace std;
int main()
{
	const int num1 = 30;
	const long int num2 = 230000;
	const char ch = 'D';
	const float b = 86.67;
	const double b = 67.8888;
	const bool b1 = true;
	const bool b2 = false;
	
	cout<<"\nThe value of num1 = "<<num1;
	cout<<"\nThe value of num2 = "<<num2;
	cout<<"\nThe character value of ch = "<<ch;
	cout<<"\nThe float values is = "<<b;
	cout<<"\The double value is = "<<b;
	cout<<"\nThe bool1 value is = "<<b1;
	cout<<"\nThe bool2 value is = "<<b2;
	return 0;
}

