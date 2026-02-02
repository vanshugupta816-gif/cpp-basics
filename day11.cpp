// ****POINTERS IN C++ ****
 
#include<iostream>
using namespace std;
int main(){
   int a = 3;
   int*b=&a;f a.  
   
   cout<<b<<endl;
   cout<<"the address of a is "<<&a<<endl; 
   cout<<"the address of a is "<<b<<endl;
    
  
   cout<<"the value at address b is "<<*b<<endl; 
  
   int**c=&b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c  is "<<*c<<endl;
    cout<<"the value at address (value_at(value_at c)) is "<<**c<<endl;
    return 0;

}
