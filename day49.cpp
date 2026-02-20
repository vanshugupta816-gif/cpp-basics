// ****POINTERS TO DERIVED CLASSES IN C++ ****

#include<iostream>
using namespace std;
class baseclass{
    public:
    int var_base;
    void display(){
        cout<<"displaying base class variable var_base"<<var_base<<endl;
    }
    
};

class derivedclass : public baseclass{
        public:
            int var_derived;
            void display(){
                cout<<"displaying base class variable var_base"<<var_base<<endl;
               cout<<"displaying base class variable var_derived"<<var_derived<<endl;
            }
};

int main(){
    baseclass * base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class
    
    base_class_pointer->var_base = 56;
    //  base_class_pointer->var_derived = 36; // will throw an error because var_derived not descrobed in upper class
    base_class_pointer->display();

    base_class_pointer->var_base = 560;
    base_class_pointer->display();

    derivedclass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 970;
    derived_class_pointer->var_derived = 97;
    derived_class_pointer->display();

    return 0;
}
