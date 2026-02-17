// ****CODE EXAMPLE:CONSTRUCTORS IN DERIVED CLASS ****

#include<iostream>
using namespace std;
/*
CASE 1:
class B : public A{
  //order of execution of constructor :first a() then b()
};

CASE 2:
class A : public B, public c{
   // order of execution of constructor : b() then c() and then a()
};

CASE 3:
class A : public B , virtual publuc C{
     //order of execution of constructor : c() then b() and then a()
};

*/

class base1{
    int data1;

    public:
    base1 (int i){
        data1 = i;
        cout<<"base1 class constructor called"<<endl;
    }
    void printdatabase1(void){
        cout<<"the value of data1 is"<<data1<<endl;
    }
};
class base2{
     int data2;

     public:
     base2 (int i) {
        data2 = i;
        cout<<"base2 class contructor called"<<endl;
    }
    void printdatabase2(void){
        cout<<"the value of data2 is"<<data2<<endl;
    }
};

class derived : public base1 , public base2{
     int derived1 , derived2;
     public:
     derived(int a, int b, int c, int d): base1 (a) , base2 (b){
        derived1 = c;
        derived2 = d;
        cout<<"derived class constructor called"<<endl;
     }
     void printdataderived(void)
     {
        cout<<"the value of derived1 is"<<derived1<<endl;
        cout<<"the value of derived2 is"<<derived2<<endl;
     }
};
int main(){
    derived vanshu(1 ,2 ,3 ,4);
    vanshu.printdatabase1();
    vanshu.printdatabase2();
    vanshu.printdataderived();
    return 0;
}
