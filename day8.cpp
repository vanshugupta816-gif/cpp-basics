
// ****C++ CONTROL STRUCTURE, IF ELSE AND SWITCH-CASE STATEMENT ****
#include<bits/stdc++.h>
using namespace std;

 // 2. Switch case ladder: 
int switchcase(int choice, vector<double>&arr)
{
  switch (choice)
  {
  case 1: // area of circle pi *r*r ....
  return M_PI* arr[0]*arr[0];
    break;
  case 2: // area of rectangle l*b ...
  return  arr[0]*arr[1];
    break;
  
  default:
    return -1;
  }

 }

int main(){
   
    // int age;
    // cout<<"Enter you age:"<<endl;
    // cin>>age;

 // selection control structure-----> 1. Else if-else if ladder:

/* if((age<18)&& (age>0)){
      cout<<"You can't come to my party you are underage"<<endl;  
    }
   else if(age<1){
    cout<<"You are not born yet sweetie"<<endl;
   }
    else if(age==18){
        cout<<"You can come to my party hot blooded babe "<<endl;
    }
    else if (age>18){
        cout<<"You can come to my party babyy"<<endl;
    } */

 // 2. Switch case ladder:  
// switch (age){

//     case 18:
//     cout<<"You are 18"<<endl;
//     break;
//     case 22:
//     cout<<"You are 22"<<endl;
//     break;
//     case 2:
//     cout<<"You are 2"<<endl;
//     break;
//     default:
//     cout<<"No special case"<<endl;
//     break;
//     cout<<"yes ended "<<endl; // this will not PRINTED AS it is after the break; 
// }
//    cout<<"switch case ended."<<endl;


 // 2. Switch case ladder: 
    vector<double> arr;   
    int choice,n1,n2;
    cout<<"enter the value of n and choice "<<endl;
    cin>>choice>>n1>>n2;
    arr.push_back(n1);
    arr.push_back(n2);
    
    cout<<switchcase(choice,arr);
    
    return 0;
}
