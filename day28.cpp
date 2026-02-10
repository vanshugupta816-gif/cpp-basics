// ****PARAMETERIZED AND DEFAULT CONSTRUCTOR IN C++ ****

#include<iostream>
using namespace std;

class point{
    int x,y;
    public:
    point(int,int);
    void print(){
        cout<<"the point is ("<<x<<","<<y<<")"<<endl;
    }
};

point::point(int a,int b){
    x=a;
    y=b;
}
int main(){
    point p1(1,1);
    p1.print();

    point p2(2,3);
    p2.print();
    
    return 0;
}
