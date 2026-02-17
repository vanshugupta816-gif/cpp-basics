// ****SOLUTION TO EXERCISE ON CPP INHERITENCE ****

/*
create 2 classes:
1. simplecalculator - takes input of 2 number using a utility function and perform + , - , *  , / and display the result using another function
2. scientificcalculator - takes input of 2 number using a utility function and perform any four scientific operation of your choice and display the result using another funtion.

create another class hybridcalculator and inherit it using these 2 classes:
Q1. what type of inheritance are you using? -----> Multiple inheritance
Q2. which mode of inheritance are you using? ----> public simplecalculator , public scientificcalculator
Q3. create an object of hybridcalculator and display result of simple and scientific calculator .
Q4. how is code reusability implement? 
*/
#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator
{
   int a, b;

public:
   void getdatasimple()
   {
      cout << "enter the value of a" << endl;
      cin >> a;
      cout << "enter the value of b" << endl;
      cin >> b;
   }
   void setdata1()
   {
      cout << "the value of a+b" << a + b << endl;
      cout << "the value of a-b" << a - b << endl;
      cout << "the value of a*b" << a * b << endl;
      cout << "the value of a/b" << a / b << endl;
   }
};

class scientificcalculator
{
   int a, b;

public:
   void getdatascientific()
   {
      cout << "enter the value of a" << endl;
      cin >> a;
      cout << "enter the value of b" << endl;
      cin >> b;
   }
   void setdata2()
   {
      cout << "the value of  cbrt(a)" << cbrt(a) << endl;
      cout << "the value of  cbrt(b)" << cbrt(b) << endl;
      cout << "the value of sqrt(a)" << sqrt(a) << endl;
      cout << "the value of sqrt(b)" << sqrt(b) << endl;
   }
};

class hybridcalculator : public simplecalculator, public scientificcalculator
{
       public:
       void display();
};
void hybridcalculator :: display(){
      getdatasimple();
      getdatascientific();   
      setdata1();
      setdata2();
}


int main()
{
   //  simplecalculator calc;
   //  scientificcalculator calc;
   // calc.getdata();
   // calc.performanceoperation();
   hybridcalculator calc;
   calc.display();
   return 0;
}
