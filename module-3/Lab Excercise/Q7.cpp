/*2. Variables, Data types, and Operators
     3.Operator demonstration:= Write a c++ program that demonstrates arithmetic, relational, logical, and bitwise operators.
       perform operations using each types of operator and display the results.
       objectives:= Reinforce understanding of different types of operatores in c++.
*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"\nEnter the num1 value = ";
	cin>>num1;
	cout<<"\nEnter the num2 value = ";
	cin>>num2;
	
	cout<<"\n--------------------used arithmetic operator------------------";
	cout<<"\n";
	cout<<"\nThe addition of two numbers = "<<num1+num2;
	cout<<"\nThe subtraction of two numbers = "<<num1-num2;
	cout<<"\nThe multiplication of two numbers = "<<num1*num2;
	cout<<"\nThe division of two numbers = "<<num1/num2;
	cout<<"\nThe reminder of two numbers = "<<num1%num2;
	
	cout<<"\n";
	cout<<"\n--------------------used relational operator-------------------";
	cout<<"\n";
	if(num1==num2)
	{
		cout<<"\nBoth value is same";	
	}	
	if(num1>num2)
	{
		cout<<"\nNum1 is greater than num2";
	}
	if(num1<num2)
	{
		cout<<"\nNum1 is less than num2";
	}
	if(num1!=num2)
	{
		cout<<"\nNum1 is not equal to num2";
	}
	
	cout<<"\n";
	cout<<"\n----------------------used logical operator-------------------";
	cout<<"\n";
	
	int num3;
	cout<<"\nEnter the num3 value = ";
	cin>>num3;
	cout<<"\n-----------used and(&&) operator---------------";
	cout<<"\n";
	if(num1>num2 && num1>num3)
	{
		cout<<"\nNum1 is greater than num2 and num3";
	}
	if(num2>num1 && num2>num3)
	{
		cout<<"\nNum2 is greater than num1 and num3";
	}
	if(num3>num1 && num3>num2)
	{
		cout<<"\nNum3 is greater  than num1 and num2";
	}
	
	cout<<"\n----------used or (||) operator-------------";
	cout<<"\n";
	if(num1>num2 || num1>num3)
	{
		cout<<"\nNum1 is greater than num2 and num3";
	}
	if(num2>num1 || num2>num3)
	{
		cout<<"\nNum2 is greater than num1 and num3";
	}
	if(num3>num1 || num3>num2)
	{
		cout<<"\nNum3 is greater than num1 and num2";
	}
	
	cout<<"\n";
	cout<<"\n-------------------------used bitwise operator-------------------";
	cout<<"\n";
	
	if((num1>num2) | (num1>num3))
	{
		cout<<"\nNum1 is biggest number";
	}
	if((num2>num1) | (num2>num3))
	{
		cout<<"\nNum2 is biggest number";
	}
	if((num3>num1) | (num3>num2))
	{
		cout<<"\nNum3 is biggest number";
	}
	cout<<"\n";
	if((num1>num2) & (num1>num3))
	{
		cout<<"\nNum1 is biggest number";
	}
	if((num2>num1) & (num2>num3))
	{
		cout<<"\nNum2 is biggest number";
	}
	if((num3>num1) & (num3>num2))
	{
		cout<<"\nNum3 is biggest number";
	}
	return 0;
}
