// ****INHERITENCE SYNTAX & VISIBILITY MODE IN C++ ****

#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
    Note:
    1. Default visibility mode is private
    2.Public visibility mode : public member of the base class become public member of the derived class
    3.private visibility mode : public member of the base class become private member of the derived class
    4.private member are never inherited 
*/
// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee vanshu(1), ladu(2);
    cout << vanshu.salary << endl;
    cout << ladu.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();

    return 0;
}
