// ****COPY CONSTRUCTOR IN C++ ****

#include<iostream>
using namespace std;

class number{
    int a;
    public:
    number()
    {
        a=0; // default value set ....
    }
    number(int num1)
    {
        a=num1;
    }

    // when no copy constructor is found, the compiler supplies its own constructor..
    number(number &obj){ // copy constructor 
        cout<<"copy constructor called!!!"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"Your display number is: "<<a<<endl;
    }
};

int main(){ 
    number x,y(32),z(45),z2,z3;
    x.display();
    y.display();
    z.display();
    
    number z1=(x); // copy constructor invoked because it is declared in this line only..
    z1.display();
 
    z2=(z);        // copy constructor not invoked as z2 was declared before..
    z2.display();
    
    z3=(y);        // copy constructor not invoked as z3 was declared before..
    z3.display();
    
    return 0;
}

