// ****PROTECTED ACCESS MODIFIER IN C++ ****

# include <iostream>
using namespace std;

class base{
    protected: // it is a private class but it can be inherited
    int a;
    private:
    int b;
};


/*
for protected class
                     public derivation      private derivation         protected derivation
private member        not inherited           not inherited             not inherited                    
protected member        protected               private                     protected
public member            public                 private                   protected

*/
class derived : base {

};

int main(){
    base b;
    derived d;
    //cout<<b.a ; // it will not work since a is protected in both base as well as derived class
    
    return 0;
}
