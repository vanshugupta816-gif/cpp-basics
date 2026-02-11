//******************* CONSTRUCTOR OVERLOADING *************************/

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printno()
    {
        cout << "your complex no is : " << a << " + " << b << "i" << endl;
    }
    
};

int main()
{
    complex c1(3, 4);
    c1.printno();

    complex c2(4);
    c2.printno();
    
    complex c3;
    c3.printno();

    return 0;
}

