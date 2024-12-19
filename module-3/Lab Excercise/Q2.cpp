/*2.Basic Input/Output:
	:= Write a c++ program that accepts user input for their name and age and then
	displays a personalized greeting.
	Objective:Practice input/output operations using cin and cout.
*/
#include<iostream>
using namespace std;
int main()
{
	int age;//declared variables
	char name[50];//declared variables 
	cout<<"\nEnter the name of person = ";
	cin>>name;
	cout<<"\nEnter the age of person = ";
	cin>>age;
	cout<<"\nThis person name is = "<<name;
	cout<<"\nThis person age is = "<<age;
	return 0;
}
