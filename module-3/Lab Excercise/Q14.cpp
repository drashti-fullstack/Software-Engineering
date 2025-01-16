/*4. Functions and scopes.
     3.Variable scope:= Write a program that demonstrates the difference between local and global variables in c++.Use functions to show scope.
     objectives:= Reinforce the concept of variable scope.
*/
#include <iostream>
using namespace std;

int globalVar = 10; 

void demonstrateLocalScope() 
{
    int localVar = 20; 
    cout << "Inside demonstrateLocalScope function:\n";
    cout << "Global variable: " << globalVar << endl; 
    cout << "Local variable: " << localVar << endl;   
}

void modifyGlobalVariable()  
{
    globalVar += 5; 
    cout << "Inside modifyGlobalVariable function:\n";
    cout << "Global variable after modification: " << globalVar << endl;
}

int main() {
    int localVar = 50; 
    cout << "Inside main function:\n";
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;  

    
    demonstrateLocalScope();

    modifyGlobalVariable(); 

    cout << "Back in main function:\n"; 
    cout << "Global variable after modification: " << globalVar << endl;

    return 0;
}