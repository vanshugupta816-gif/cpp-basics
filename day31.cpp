// ****DYNAMIC INTIALIZATION OF OBJECTS USING CONSTRUCTOR ****

#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float interestrate;
    float Returnvalue;

public:
    bankdeposit(){} // we have to make this default constructor for the below constructor to work.
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int R);
    void printvalue();
};
bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    Returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        Returnvalue = Returnvalue * (1 + interestrate);
    }
}
bankdeposit::bankdeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    interestrate = float(R) / 100;
    Returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        Returnvalue = Returnvalue * (1 + interestrate);
    }
}
void bankdeposit::printvalue()
{
    cout << "Principal amount was " << principal << " rs returnvalue after " << years << " years is " << Returnvalue << endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the values of p, y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.printvalue();

    // cout << "Enter the values of p, y and R" << endl;
    // cin >> p >> y >> R;
    // bd2 = bankdeposit(p, y, R);
    // bd2.printvalue();
    return 0;
}
