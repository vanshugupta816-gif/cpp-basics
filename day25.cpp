// ****FRIEND CLASS & MEMBER FRIEND FUNCTION ****

#include <iostream>
using namespace std;

// class declaration
class complex; // it assures that there is class named complex..

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sum_real_complex(complex, complex); // we cannot write o1 and o2 here it will show error, because we haven't told the compiler that variables like o1 and o2 is there (by declaring)...
    int sum_comp_complex(complex, complex); // we cannot write o1 and o2 here it will show error, because we haven't told the compiler that variables like o1 and o2 is there (by declaring)...
};
class complex
{
    int a, b;
    // Individually declaring functions as a friend.........
    friend int calculator::sum_real_complex(complex o1, complex o2);
    friend int calculator::sum_comp_complex(complex o1, complex o2);
    
    // alter: declaring the whole class as a friend ----->meaning each function of that class can access this class private data.......
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b <<"i"<< endl;
    }
};
int calculator ::sum_real_complex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sum_comp_complex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    complex o1, o2;
    o1.setnumber(1, 2);
    o1.printnumber();

    o2.setnumber(5, 3);
    o2.printnumber();

    // we are talking about calculator class now.....
    calculator cal;
    int res = cal.sum_real_complex(o1, o2);
    cout << "the sum of real numbers is :" << res << endl;
    int resc = cal.sum_comp_complex(o1, o2);
    cout << "the sum of complex numbers is :" << resc << endl;

    return 0;
}
