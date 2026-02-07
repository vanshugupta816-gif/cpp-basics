// **** Static Data Members & Methods in C++ OOPS ****

#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout<<"Enter your ID:"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void)
    {
        cout<<"The ID of your employee is "<<id<<" and your employee number is "<<count<<endl;
    }
    // static functions---> These are the functions which can only access the static members and functions only.
    static void getcount(void)
    {
    //cout<<id; ------> throws an error
    cout<<"The value of count is: "<<count<<endl;
   }

};

// count is the static data member of the class employee--------->
int employee::count; // (count=100;) we can do this , otherwise default value is 0.

int main()
{
    employee ladu, vanshu, lakshit;
    
    ladu.setdata();
    ladu.getdata();
    employee::getcount();

    vanshu.setdata();
    vanshu.getdata();
    employee::getcount();
   
    lakshit.setdata();
    lakshit.getdata();
    employee::getcount();
    
    return 0;
}
