 // ****ARRAY OF OBJECT & PASSING OBJECT AS FUNCTION ARGUMENT IN C++ **** 

#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setdata(int c1,int c2)
    {
      a=c1;
      b=c2;
    }
void setdatabysum(complex o1,complex o2){
   a = o1.a+o2.a;
   b = o1.b+o2.b; 
    
}
void print(){
    cout<<"Your complex no is "<<a<<"+i"<<b<<endl;
}
};
int main(){
    complex a1,a2,a3;
    a1.setdata(1,2);
    a1.print();
    
    a2.setdata(3,4);
    a2.print();
    
    a3.setdatabysum(a1,a2);
    a3.print();
    return 0;
}
