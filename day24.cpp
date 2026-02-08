// ****FRIEND FUNCTION IN C++ ****

#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }

    
    // below line means that the non member sumcomplex is allowed to do anything with private parts (members) of the class.
    friend complex sumcomplex(complex o1,complex o2);
    void print(){
        cout<<"Your number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex o1,complex o2){
 // cout<<a; // it is not allowed.
    complex o3;
    o3.setnumber ( (o1.a+o2.a) , (o1.b+o2.b) );
    return o3;
}


int main(){
    complex c1,c2,sum;
    c1.setnumber(1,2);
    c1.print();

    c2.setnumber(5,8);
    c2.print();

    sum = sumcomplex(c1,c2);
    sum.print();
    return 0;
}

/* *********** PROPERTIES OF A FRIEND FUNCTION **************

1. Not in the scope of the class
2. Since it is not in the scope of the class, it cannot be called from the object of that class, for example, sumComplex() is invalid
3. A friend function can be invoked without the help of any object
4. Usually contain objects as arguments
5. Can be declared under the public or private access modifier, it will not make any difference
6. It cannot access the members directly by their names, it needs (object_name.member_name) to access any member. */
