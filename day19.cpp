// ****CLASSES, PUBLIC & PRIVATE ACCESS MODIFIER IN C++****

/*#include<iostream>
using namespace std;

class employee{
    private:
    int a,b,c; 
   
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);  //declaration only.
    void getdata(){
        cout<<"the value of a is: "<<a<<endl;
        cout<<"the value of b is: "<<b<<endl;
        cout<<"the value of c is: "<<c<<endl;
        cout<<"the value of d is: "<<d<<endl;
        cout<<"the value of e is: "<<e<<endl;
    }
};

void employee::setdata(int a1,int b1,int c1){
   a=a1;
   b=b1;
   c=c1;

}

int main(){
    employee vanshu;
   // vanshu.a;   ------->it can't execute because 'a' is an private value.
    vanshu.d=12;
    vanshu.e=122;
    vanshu.setdata(1,2,4);
    vanshu.getdata();
    return 0;
}*/

#include<iostream>
using namespace std;
class Animal 
{
    private:
    int eat;
    int sound;

    public:
    int animal;
    void setdata(int food,int noise); // declaration
    void getdata(){
        cout<<"the "<<animal<<" eats "<<eat<<endl;
        cout<<"the "<<animal<<" is "<<sound<<"very loudly"<<endl;
    
    }
};

void Animal :: setdata(int food,int noise){
    eat=food;
    sound=noise;
}

int main(){
    Animal dog;
    dog.animal = 1;
    dog.setdata(3,2);
    dog.getdata();
    return 0;
}
