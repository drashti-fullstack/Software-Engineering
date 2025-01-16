/*3.Control flows statements:
    4. Nested control statements:= Write a program that prints a right-angled triangle using stars(*) with a nested loop.
    Objective:= Learn nested control structure.
*/
#include <iostream>
using namespace std;
int main()
{
    int row, k, i, j;

    cout << "\nEnter the row value = ";
    cin >> row;

    int spc = row - 1;

    for (i = 1; i <= row; i++)
    {
        for (j = spc; j >= i; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
