// ****C++ REFERENCE VARIABLE & TYPECASTING****

#include<iostream>
using namespace std;
int c = 54;
int main(){

//*************BUILD IN DATA TYPES**************
/*int a,b,c;
cout<<"enter the value of a:"<<endl;
cin>>a;
cout<<"enter the value of b:"<<endl;
cin>>b;
c=a+b;
cout<<"the sum is:"<<c<<endl;
cout<<"the glob c:"<<::c; // by applying the resolution operator it acceses the global variable 'c'.*/

//*************FLOAT,DOUBLE and LONG DOUBLE LITERALS****************

/*float d=34.4f;
long double e=34.4l;
cout<<"the size of 34.4 is:"<<sizeof(34.4)<<endl;
cout<<"the size of 34.4f is:"<<sizeof(34.4f)<<endl;
cout<<"the size of 34.4F is:"<<sizeof(34.4F)<<endl;
cout<<"the size of 34.4l is:"<<sizeof(34.4l)<<endl;
cout<<"the size of 34.4L is:"<<sizeof(34.4L)<<endl;
cout<<"the value of d is: "<<d<<endl<<"the value of e is: "<<e;*/

//***************REFRENCE VARIABLES ****************

//rohan das ---> monty ---> rohu ----> dangerous coder 
/*float x=467;
float &y=x;
cout<<x<<endl;
cout<<y<<endl;*/

//****************TYPECASTING***************

int u =45;
float w =45.46;
cout<<"the value of u is: "<<(float)u<<endl;
cout<<"the value of u is: "<<float(u)<<endl;

cout<<"the value of u is: "<<(int)w<<endl;
cout<<"the value of u is: "<<int(w)<<endl;

cout<<"the following expression is: "<< u + w<<endl;
cout<<"the following expression is: "<< u + (int)w<<endl;
cout<<"the following expression is: "<< u + int(w)<<endl;

return 0;
}
