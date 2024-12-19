/*3. Control flow statements:
     1.Grade calculator:= Write a C++ program that takes a student's marks as input and calculates the grade based on if-ellse condition.
     Objective:= Practice conditional statements(if-else).
*/
#include<iostream>
using namespace std;
int main()
{
	int mark1,mark2,mark3;
	float per;
	
	cout<<"\nEnter the first subject number = ";
	cin>>mark1;
	cout<<"\nEnter the secind subject number = ";
	cin>>mark2;
	cout<<"\nEnter the third subject number = ";
	cin>>mark3;
	
	cout<<"\nThe first subject mark is = "<<mark1;
	cout<<"\nThe second subject mark is = "<<mark2;
	cout<<"\nThe third subject mark is = "<<mark3;
	int ans = mark1+mark2+mark3;
	float percentage = ans/3;
	
	cout<<"\nThe addition is all subject number = "<<ans;
	cout<<"\nThe percentage is = "<<percentage;
	
	if(percentage > 40 && percentage <=75)
	{
		cout<<"\nGrade - c";
	}
	else if(percentage > 78 && percentage <=90)
	{
		cout<<"\nGrade - B";
	}
	else if(percentage > 90 && percentage <=100)
	{
		cout<<"\nGrade - A";
	}
	return 0;
}

