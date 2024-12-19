/*6.Introduction to OOP
    1.Class for a simple calculator:= Write a c++ program that defines a class calculator with functions for addition,subtraction, 
    miltiplication, and division.create objects to use these functions.
    objectives:= Introduce basic class structure.
*/
#include<iostream>
using namespace std;
class calculator
{
	public:
		void addition()
		{
			int num1,num2;
			cout<<"\nEnter the two for addition";
			cout<<"\n";
			cout<<"\nEnter the num1 value = ";
			cin>>num1;
			cout<<"\nEnter the num2 value = ";
			cin>>num2;
			cout<<"\nThe addition is = "<<num1+num2;
		}
		void subtraction()
		{
			int num1,num2;
			cout<<"\nEnter the two for subtraction";
			cout<<"\n";
			cout<<"\nEnetr the num1 value = ";
			cin>>num1;
			cout<<"\nEnter the num2 value = ";
			cin>>num2;
			cout<<"\nThe subtraction is = "<<num1-num2;
		}
		void multiplication()
		{
			int num1,num2;
			cout<<"\nEnetr the two for multiplication = ";
			cout<<"\n";
			cout<<"\nEnter the num1 value = ";
			cin>>num1;
			cout<<"\nEnter the num2 value = ";
			cin>>num2;
			cout<<"\nThe multiplication is = "<<num1*num2;
		}
		void division()
		{
			int num1,num2;
			cout<<"\nEnetr the two for division";
			cout<<"\n";
			cout<<"\nEnter the num1 value = ";
			cin>>num1;
			cout<<"\nEnter the num2 value = ";
			cin>>num2;
			cout<<"\nThe dividion is = "<<(float)num1/(float)num2;
		}
};
int main()
{
	int choice;
	cout<<"\n1. addition";
	cout<<"\n2. subtraction";
	cout<<"\n3. multiplication";
	cout<<"\n4. division";
	cout<<"\n";
	cout<<"\nEnter the choice : ";
	cin>>choice;
	
	calculator c1;
	switch(choice)
	{
		case 1:
			c1.addition();
		break;
		case 2:
			c1.subtraction();
		break;
		case 3:
			c1.multiplication();
		break;
		case 4:
			c1.division();
		break;
		default:
			cout<<"\nInvalid choice";
		break;
		return 0;
	}
}
