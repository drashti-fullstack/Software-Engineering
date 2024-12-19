/*3. POP Vs. OOP comparison program
    := Write two small programs:one using procedural programming(POP) to calcute the area ofa rectangle, 
	and another using Object-Oriented Programming(OOP) with a class and object for the same task.
	objective:Highlight the differences between POP and OOP approaches.
*/
#include<iostream>
using namespace std;
int main()
{
	printf("\n--------------pop language area of rectangle-----------------");//This is a C language program
	printf("\n");
	int area,length,width;//declared the variables
	
	printf("\nEnter the length = ");
	scanf("%d",&length);
	printf("\nEnter the width = ");
	scanf("%d",&width);
	
	area=length*width;
	printf("\nThe area of rectangle is = %d",area);//Print the area of rectangle
	
	cout<<"\n----------------oop language area of rectangle-----------------";//This is a c++ language program
	cout<<"\n";
	cout<<"\nEnter the length = ";
	cin>>length;
	cout<<"\nEnter the width = ";
	cin>>width;
	
	area = length*width;
	
	cout<<"\nThe area of rectangle is = "<<area;//Print the area rectangle
	return 0;	
}
