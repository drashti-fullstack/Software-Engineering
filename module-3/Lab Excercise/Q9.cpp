/*3.Control flow statements.
    2.Number guessing game:= Write a c++ program that asks the user to guess a number between 1 and 100.The program should provide 
     hints if the guess is too high or too low.Use loops to allow the user multiple attempts.
     Objectives:= Understand while loops and conditional logic.
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int random_number = rand()%100+1;//This generated a random number
	int number;
	cout<<"\nWelcome to the number guessing game!";
	cout<<"\nRandom numbers = "<<random_number;
	while(true)
	{
		cout<<"\nEnter the number";
		cin>>number;
	
		if(number<random_number)
		{
			cout<<"\nThe number is low. try again!"; 
		}
		else if(number>random_number)
		{
			cout<<"\nThe number is high. try agian!";
		}
		else
		{
			cout<<"\nCongratulatons! you guessed the correct number!";
			break;
		}
	}
	return 0;
}

