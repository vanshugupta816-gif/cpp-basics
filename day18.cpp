// ****FUNCTION OVERLOADING WITH EXAMPLE IN C++ ****

#include<iostream>
using namespace std;

    //**FUNCTION OVERLOADING --> it means creating multiple functions of same name but with different no. of argumensts . the compiler identifies itself which function to use when.

int sum (int a,int b){
    cout<<"Using functions with 2 arguments"<<endl;
    return a+b;
}
int sum (int a,int b,int c){
    cout<<"Using functions with  3 arguments"<<endl;
    return a+b+c;
}
int volume(int radius, int height ){
    return(3.14*radius*radius*height);
}
int volume(int side){
    return(side*side*side);
}
int volume(int length,int breadth,int height){
    return(length*breadth*height);
}
int main(){
    cout<<"the sum of 5 and 6 is : "<<sum(5,6)<<endl;
    cout<<"the sum of 5,6 and 7 is: "<<sum(5,6,7)<<endl; 
    cout<<"the volume of a cylinder of radius 5 and height 6 is: "<<volume(5,6)<<endl; 
    cout<<"the volume of a cube of side 6 is: "<<volume(6)<<endl; 
    cout<<"the volume of a cuboid of length 5 ,breadth 6 and height 7 is: "<<volume(5,6,7)<<endl; 
     
    return 0;
}
