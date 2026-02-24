// ****MEMBER FUNCTION TEMPLATES & OVERLOADING TEMPLATE FUNCTION IN C++****
#include<iostream>
using namespace std;

template<class T>
class vanshu{
     public:
     T data;
     vanshu(T a){
        data = a;
     }
     void display();
};

template <class T>
void vanshu<T>:: display(){
              cout<<data;
     }

void func(int a){
     cout<<"i am first func()"<<a<<endl;
}

template <class T>
void func(T a){
     cout<<"i am templatised func()"<<a<<endl;
}

template <class T>
void func1(T a){
     cout<<"i am templatised func()"<<a<<endl;
}

int main(){
    // vanshu<float> h(5.7);
    //  vanshu<char> h('c');
    //  vanshu<int> h(87);
    // cout<<h.data;
    // h.display();

   
    //  func(4); // exact match take the higher priority
     func1(4); // exact match take the higher priority

    return 0;
}
