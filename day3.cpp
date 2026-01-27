// ****VARIABLE SCOPE & DATA TYPE IN C++****

#include<bits/stdc++.h>

using namespace std;
int main(){
    int a=4,b=6;
    float pi=3.14;
    char c='s';
    string s = "motuu";
    cout<<"this is tutorial 4.\nthe value of a is:"<<a<<"\nthe value of b is:"<<b<<"\nthe value of pi:"<<pi ;
    cout<<"\nthe value of c:"<<c<<"\n"<<s;
    return 0;

}

#include<iostream>
using namespace std;
int glo=6;      // global variable 
void sum(){
  int a;
   cout<< glo;      // void sum doesn't need any return value 
 }

int main(){
    int glo=8;  // local variable 
    glo=78; //local variable updated 
    sum(); //this is the function that recieves order from int_main
    //bool x=true;
    bool y = false;
    cout<< glo<<y;
    return 0;
} 

# include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<< glo;
}

int main(){
int glo=9;
glo=78;
    //int a=14;
    //int b= 15;
    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = false;
    sum();
    cout<<glo<< is_true;
    //cout<<"this is tutorial 4.\n Here the value of a is "<<a<<".\nthe value of b is "<<b;
    //cout<<"the value of pi is"<<pi;
    //cout<<"the value of c is"<<c;

    return 0;
}
