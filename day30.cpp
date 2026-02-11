// ****CONSTRUCTOR WITH THE DEFAULT ARGUMENT IN C++ ****

#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    int data3;

    public:
    simple(int a,int b=9,int c=8){
       data1=a;
       data2=b; 
       data3=c;
    }
    void print();
};

void simple::print(){
    cout<<"the value of data 1 , data 2 and data 3 is: "<<data1<<" , "<<data2<<" and "<<data3<<endl;;
}
int main(){
    simple s1(1,4);
    // simple s1(1);
    s1.print();
    return 0;
}
