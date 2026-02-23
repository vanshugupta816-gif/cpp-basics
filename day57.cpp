// ****C++ TEMPLATES: TEMPLATES WITH MULTIPLE PARAMETERS ****

#include<iostream>
using namespace std;
/*
CLASS TEMPLATE WITH MULTIPLE  PARAMETERS(ONE , TWO OR MORE THAN TWO) 
templates<class t1, class t2.....(COMMA SEPARATED)>

template<class T1, class T2>
class nameofclass{
     // body
}
*/

template<class T1, class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a,T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};

int main(){
    myclass<char, float> obj('c', 1.8);
    obj.display();
  return 0;
}
