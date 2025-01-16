/*6.Introduction to OOP:=
    3.Inheritance Example:=Write a program that implements inheritance using a base class person and derived classs student and teache.
    Demonstrate reusebility through inheritance.
    Objectives:= Learn the concept of inheritance.
*/
#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;

public:
    void parson(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void diplay()
    {
        cout << "\nThe name of person = " << name;
        cout << "\nThe age of person = " << age;
    }
};
class student : public person
{
};
class Teacher : public person
{
};
int main()
{

    person p1;
    p1.parson("drashti", 22);
    p1.diplay();
    student s1;
    s1.parson("saile", 19);
    s1.diplay();
    Teacher t1;
    t1.parson("dipti", 15);
    t1.diplay();
    return 0;
}
