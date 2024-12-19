/*3.Control flow statements
    3.Multiplication table:= Write a c++ program to display the multiplication table of a given number using a for loop.
    objectives:= Practice using loops.
*/
#include<iostream>
using namespace std;
int main()
{
	int num,j;
	cout<<"\nEnter the num value = ";
	cin>>num;
	
	for(j=1;j<=10;j++)
	{
		cout<<num<<"X"<<j<<"="<<num*j;
		cout<<"\n";
	}
	return 0;
}
