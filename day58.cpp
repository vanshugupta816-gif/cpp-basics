// ****C++ TEMPLATES: CLASS TEMPLATES WITH DEFAULT PARAMETERS ****

#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class vanshu{
     public:
     T1 a ;
     T2 b ;
     T3 c ;
     vanshu(T1 x, T2 y, T3 z){
        a=x;
        b=y;
        c=z;
     }
     void display(){
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
        cout<<"the value of c is"<<c<<endl;
     }
};

int main(){
    vanshu<> h(4,6.4,'c');
    h.display();
    vanshu<float, char, char> g(4, 'y', 'h');
    g.display();
    return 0;
}
