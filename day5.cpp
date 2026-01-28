// ****C++ HEADER FILES & OPERATORS****

#include<iostream>
using namespace std;

int main(){
int a=4,b=5;
cout<<"operators in c++"<<endl;
cout<<"there are following types of operators in c++"<<endl;
// 1.arithematic operators:s
cout<<"the value of a+b is:"<<a+b<<endl;
cout<<"the value of a-b is:"<<a-b<<endl;
cout<<"the value of a*b is:"<<a*b<<endl;
cout<<"the value of a/b is:"<<a/b<<endl;//the integer i/p will give result in the integer o/p only
cout<<"the value of a%b is:"<<a%b<<endl;
cout<<"the value of a++ is:"<<a++<<endl;// it will first print then increment so a=5 but prints 4
cout<<"the value of a-- is:"<<a--<<endl;// it will first print then decrement so a=4 but prints 5
cout<<"the value of ++a is:"<<++a<<endl;//it will first increment then print so a=5
cout<<"the value of --a is:"<<--a<<endl;//it will first decrement then print so a=4
cout<<endl;

// 2. assignment operators --> these are used to assign values to variables 
//  int a=9,b=8;
//  char d ='d';

// 3. comparison operators--> if the comparison is true then it will print 1 else 0.
cout<<"following are the comparison operators in c++"<<endl;
cout<<"the value of a==b is "<<(a==b)<<endl;
cout<<"the value of a!=b is "<<(a!=b)<<endl;
cout<<"the value of a>=b is "<<(a>=b)<<endl;
cout<<"the value of a<=b is "<<(a<=b)<<endl;
cout<<"the value of a<b is "<<(a<b)<<endl;
cout<<"the value of a>b is "<<(a>b)<<endl;
cout<<endl;

// 4. logical opertaor--> AND(&&) , OR(||) , not(!) .
cout<<"the value of this AND logical operator ((a==b)&&(a<b)) is:"<<((a==b)&&(a<b))<<endl;//BOTH CONDITION HAS TO BE TRUE FOR THE POSITIVE RESULT 
cout<<"the value of this OR logical operator ((a==b)||(a<b)) is:"<<((a==b)||(a<b))<<endl; // ONE TRUE CONDITION IS ENOUGH TO SHOW POSITIVE RESULT
cout<<"the value of this AND logical operator (!(a==b)) is:"<<(!(a==b))<<endl; //IT WILL SHOW THE OPPOSITE RESULT 

return 0; 
}
// There are two types of header files:
// 1. System header file :it  comes with the compiler
// 2. User defined header files : it is written by programmer
// #include "this.h" //--> This will produce error if this.h is no present in current directory




