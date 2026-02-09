// ****MORE ON C++ FRIEND FUNCTION ****

#include <iostream>
using namespace std;
class c2;
class c1
{
    int val_1;

public:
    friend void swap(c1 &, c2 &);
    void int_data(int a)
    {
        val_1 = a;
    }
    void display()
    {
        cout << val_1 << endl;
    }
};
class c2
{
    int val_2;
    friend void swap(c1 &, c2 &);

public:
    void int_data(int a)
    {
        val_2 = a;
    }
    void display()
    {
        cout << val_2 << endl;
    }
};

void swap(c1 &x, c2 &y)
{
    int temp = x.val_1;
    x.val_1 = y.val_2;
    y.val_2 = temp;
}

int main()
{
    c1 ab;
    ab.int_data(34);

    c2 sk;
    sk.int_data(67);
    swap(ab, sk);
    cout << "the value of c1 after exchange is :";
    ab.display();
    cout << "the value of c2 after exchange is :";
    sk.display();

    return 0;
}



#include <iostream>
using namespace std;
class Y;
class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << " Summning the values of X and y is: " << o1.data + o2.num << endl;
}

int main()
{
     X a1;
    a1.setvalue(3);

     Y b1;
    b1.setvalue(4);

    add(a1, b1);

    return 0;
}
