// ****FUNCTIONS & FUNCTION PROTOTYPES IN C++****

#include<iostream>
using namespace std;

// function prototype:

//int sum(int a,int b); //------> acceptable    // this give assurity that the function 'int_sum' will be present afterwards.
//int sum(int a, b); //------>  not acceptable
int sum(int,int); //------> acceptable

//void g(void); // -------->acceptable
//  void g(); // -------->acceptable
void g1(){
    cout<<"hello vanshu"<<endl;
}
int main(){
    int num1;int num2;
    cout<<"enter the value of num1:"<<endl;
    cin>>num1;
    cout<<"enter the value of num2:"<<endl;
    cin>>num2;
    //num1 and num2 are the actual parameters.
    cout<<"the sum is: "<<sum(num1,num2)<<endl;
    g1();
    return 0;
}

int sum(int a,int b){
    // Formal parameters 'a' and 'b' will be taking values from the actual parameters.
    int c =a+b;
    return c;
}

