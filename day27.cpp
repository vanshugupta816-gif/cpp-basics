// ****CONSTRUCTORS IN C++ ****

#include<iostream>
using namespace std;

class complex {
    int a,b;
    public:
    complex (void); // constructor declaration 
    void printnumber(){
        cout<<"your complex no is :"<<a<<" + "<<b<<"i"<<endl;
    }
};
complex::complex(void){ // ------> it is a default constructor as it accepts no parameters.
    a=10;
    b=20;
    //cout <<"hello world"<<endl;
}
int main(){
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    
    return 0;
}

// constuctor ------->
// creating a constructor.
// A constructor is a special member function that has the same name as of the class name.
// it is used to initialize the object of its class.
// it is automatically invoked(called) when other object is created.

// characteristics of a constructor ------------->
// 1. it should be declared in the public section of the class.
// 2. They are automaticaly invoked whenever the object is created.
// 3. They cannot return values and do not have a return types.
// 4. It can have default arguments.
// 5. We cannot refer to their address.
