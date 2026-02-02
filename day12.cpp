// ****ARRAY & POINTERS ARITHMETIC IN C++ ****

#include<iostream>
#include<string>
using namespace std;
int main(){
    
    int marks[]={24,33,40,58};
    int math_marks[]={99,27,38,49};
    
    // array example:   
    cout<<"These are the math marks:"<<endl;
    cout<<math_marks[0]<<endl;
    cout<<math_marks[1]<<endl;
    cout<<math_marks[2]<<endl;
    cout<<math_marks[3]<<endl;
   
   //we can change the value of an array:
    
    marks[2]=100;
    cout<<"These are the marks:"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

   // ARRAYS AND POINTERS:
      
    //2.
    int* p= marks;
    cout<<*(p++)<<endl; // It first prints the array and then increments it and print marks[0]= 24;
    cout<<*p<<endl; // It prints the array element that was incremented as above that is: marks[1]=33 .
    cout<<*(++p)<<endl; // it increments the array element which was given above and then prints that is: marks[2]=100. 
    
    
    //1.
    cout<<"the value of *P is: "<<*p<<endl;
    cout<<"the value of *(p+1) is: "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is: "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is: "<<*(p+3)<<endl;


   // 2D array:
    int arr[3][5];
    arr[1][0]=25;
    cout<<"the value of arr[1][0]=25 is : "<<arr[1][0]<<endl;

    // strings:-
    string s="vanshu";
    int len=s.length();
    s[2]='c';
    cout<<"s[0] value is :"<<s[0]<<endl;
    cout<<"s[1] value is :"<<s[1]<<endl;
    cout<<"s[2] value is :"<<s[2]<<endl;;
    //cout<<len; // this will give the length of the string..
    cout<<"s[4] value is :"<<s[len-1]<<endl; // this will print the last character of the string..
    return 0;
}
