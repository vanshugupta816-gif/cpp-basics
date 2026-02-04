// ****CALL BY VALUE & CALL BY REFERENCE ****

#include<iostream>
using namespace std;

int sum(int a,int b){
   int c=a+b;
   return c;
}

// this will not swap pointers.
void swap(int a,int b){  //  t  a   b 
    int temp=a;          //  4  4   5
    a=b;                 //  4  5   5
    b=temp;              //  4  5   4
}

// call by refrence using pointers-->
  void swapPointer(int *a,int *b){   // t   a   b
     int temp=*a;                    // 4   4   5
     *a=*b;                          // 4   5   5
     *b=temp;                        // 4   5   4
  }
 
   // call by refrence using c++ reference vaiables (as shown in tut7.cpp)
  // int& 
   void swap_ref_var (int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
   // return a;
   }
int main(){
    int a=4;
    int b=5;
    
    cout<<"the sum is: "<<sum(a,b)<<endl;
    cout<<"the value of a is: "<<a<<" the value of b is: "<<b<<endl;
    
    /*swap(a,b);// this will not swap pointers
    cout<<"the value of a is "<<a<<" the value of b is: "<<b<<endl;*/

    /* swapPointer(&a,&b); // this will swap variables using pointers.
    cout<<"the value of a is: "<<a<<" the value of b is: "<<b<<endl;*/
    
   // swap_ref_var(a,b)=786; // This will swap using reference variables and a=786.
    swap_ref_var(a,b); // This will swap using reference variables
    cout<<"the value of a is : "<<a<<" the value of b is : "<<b<<endl;
    
    
    return 0;
}
