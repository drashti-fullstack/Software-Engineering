/*4. Functions and scopes
     1. Simple calculator using function:=
        Write a C++ program that defines functions for basic arithmetic operations(add,sub,multiply,divide).The main function should call thsee
        based on user input.
        Objective:= Practice defining and using function in c++.
*/
#include<iostream>
using namespace std;
int input_value(int &num1,int &num2);
void addition();
void subtraction();
void multiplication();
void division();
int main()
{
	int choice;
	do
	{
		cout<<"\nSimple calculator";
		cout<<"\n";
		cout<<"\n1. addition";
		cout<<"\n2. Subtraction";
		cout<<"\n3. multiplication";
		cout<<"\n4. division";
		cout<<"\n5. Exit";
		cout<<"\n";
		cout<<"\nEnter the choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				addition();
			break;
			case 2:
				subtraction();
			break;
			case 3:
				multiplication();
			break;
			case 4:
				division();
			break;
			case 5:
				cout<<"\nInvalid choice! Please try agin";
			break;
		}	
	}while(choice!=5)

	addition();
	subtraction();
	multiplication();
	division();
	return 0;	
} 
int input_values(int &num1,int &num2)
{
	cout<<"\nEnter the first value = ";
	cin>>num1;
	cout<<"\nEnter the second value = ";
	cin>>num2;
}
void addition()
{
	int num1,num2;
	input_value(num1,num2);
	cout<<"\nThe addition is two number = "<<(num1+num2);
}
void subtraction()
{
	int num1,num2;
	input_value(num1,num2);
	cout<<"\nThe subtraction is two number = "<<(num1-num2);
}

void multiplication()
{
	int num1,num2;
	input_value(num1,num2);
	cout<<"\nThe multiplication is two number = "<<(num1*num2);
}
void division()
{
	int num1,num2;
	input_value(num1,num2);
	cout<<"\nThe division is two number = "<<(num1/num2);
}


