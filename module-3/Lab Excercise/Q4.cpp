/*4.Setting Up Development Environment
   := Write a program that asks for two numbers and displays their sum.Ensure this is
   done after setting up the IDE(like Dev c++ or codeblocks).
   objective:Help students understand how to install,configure,and run programs in an IDE.
*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;//declared the variables
	cout<<"\nEnter the value of num1 = ";
	cin>>num1;
	cout<<"\nEnetr the value of num2 = ";
	cin>>num2;
	num3 = num1+num2;
	
	cout<<"\nThe addition of two numbers = "<<num3;//Print the two numbers addition
	return 0;
}
