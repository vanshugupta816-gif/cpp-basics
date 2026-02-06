
// **** NESTING OF MEMBER FUNCTION****

#include <iostream>
#include <string>
using namespace std;

class binary
{
    // private:
    string s;
    void chk_bn(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout<<"Enter your binary number: "<<endl;
    cin >> s;
}

void binary ::chk_bn(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout<<"Incorrect binary number"<<endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bn(); // ------> this is said to be nesting of a member function.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            (s.at(i) = '0');
        }
    }
}

void binary ::display(void)
{
    cout << "displaying your binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    // b.chk_bn();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}
