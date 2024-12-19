/*6.Introduction to OOP:
    2.Class for Bank Account:= Create a class Bank ACcount with data members like balance and member functions like deposite and withdraw.
    implement encapsulation by keeping the data memebers private.
    Objective:= Understand encapsulation in classes.
*/
#include<iostream>
using namespace std;
class BankAccount // create the class 
{
	private:     
   		 int balance; 
    	string name; 

    double acno; 
public:
    BankAccount() : balance(0) {};

    void create()
    {
        cout << "\nEnter your account number = "; 
        cin >> acno; 

        cout << "\nEnter the account holder name = "; 
        getline(cin, name); 

        cout << "\nAccount Created successfully!\n"; 
    }

    void show()
	{
        cout << "\n---------- Account Details ----------";
        cout << "\nAccount number = " << acno; 
        cout << "\nAccount holder name = " << name; 
        cout << "\nAccount balance = " << balance << endl; 
    }

    void deposit()  
    {
        unsigned int amount;

        cout << "\nEnter the deposit amount = "; 
        cin >> amount;

        balance += amount;
        cout << "New Account Balance = " << balance << endl; 
    }

    void withdraw()
    {
        unsigned int amount;

        cout << "\nEnter the withdraw amount = "; 
        cin >> amount; 

        if (amount <= balance) 
        {
            balance -= amount; 
            cout << "\nWithdrawal successful!\nNew balance = " << balance << endl; 
        }
        else
        {
            cout << "Insufficient balance! \n Current Balance: " << balance << endl; 
        }
    }
};
int main()
{
    BankAccount b1; // object creat for bankaccount class 

    char ch;  // declred the charector

    do
    {
        cout << "\n---------- Bank Menu ----------";
        cout << "\n1. Create Account";
        cout << "\n2. Show Details";
        cout << "\n3. Deposit Amount";
        cout << "\n4. Withdraw Amount";
        cout << "\nPress 'n' to exit the menu"<<endl;
        cout << "\n\nEnter your choice = ";
        cin >> ch;

        switch (ch) the user.
        {
        case '1' : 
            b1.create(); 
        break;
        case '2' : 
            b1.show(); 
        break;
        case '3' : 
            b1.deposit(); 
        break;
        case '4' : 
            b1.withdraw(); 
        break;
        case 'n' : 
            cout << "\nExiting the program. Goodbye!\n";
        break;

        default:
                cout << "Invalid choice! Please try again.\n"; 
        break;
        }
    } while (ch != 'n'); 
    
    return 0;
}
