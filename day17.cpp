// ****RECURSION & RECURSIVE FUNCTION IN C++ ****

#include <iostream>
using namespace std;
// this is solved by recursion function("it calls itself repeatedly until it solves itself") .

// fibnocci sequence: 1,1,2,3,5,8,13.....
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)   

// factorial:
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);

    // Step by step calculation of factorial(4)    
// factorial(4) = 4 * factorial(3);     
// factorial(4) = 4 * 3 * factorial(2);   
// factorial(4) = 4 * 3 * 2 * factorial(1);     
// factorial(4) = 4 * 3 * 2 * 1;       
// factorial(4) = 24;  

}

int main()
{
   // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!
    int a;
    cout << "enter the value :" << endl;
    cin >> a;
    // cout<<"the factorial of "<<a<<" is: "<<factorial(a)<<endl;
    cout << "the fibnocci sequence of term " << a << " is: " << fib(a) << endl;
    return 0;
}
