// ****CONSTANTS, MANIPULATORS & OPERATOR PRECEDENCE****

#include<iostream>
#include<iomanip>  //with the help of this we can use 'setw()' manipulator like: endl.
using namespace std;
int main(){

/*int a= 45;
cout<<"the value of a was: "<<a<<endl;
a=54;
cout<<"the value of a is: "<<a<<endl;*/

// ********** constants in c++ ********

/*const int a=45;
cout<<"the value of a was:"<<a<<endl;
//a=54;*/
 
// ********** MANIPULATORS in c++ ********

/*int a=3,b=78,c=2834;
cout<<"the value of a without setw is: "<<a<<endl;
cout<<"the value of b without setw is: "<<b<<endl;
cout<<"the value of c without setw is: "<<c<<endl;
cout<<"the value of a with setw is: "<<setw(4)<<a<<endl;
cout<<"the value of b with setw is: "<<setw(4)<<b<<endl;
cout<<"the value of c with setw is: "<<setw(4)<<c<<endl;*/

// ********** operators precedance in c++ ********

int a=5,b=8;
int c=((((a*5)+b)-5)+9);//apply paranthesis as per the precedance
cout<<c<<endl;
return 0;   
}
