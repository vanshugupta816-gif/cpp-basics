// ****FILE I/O IN C++: READING & WRITING FILES ****

#include<iostream>
#include<fstream>
/*
the useful classes for working with files in c++ are:
1. fstreambase
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase
*/

// in order work with files in c++, you will have to open it. primarly, there are 2 ways to open a file.
// 1. using the constructor
// 2. using the member function open() of the class

using namespace std;

int main(){
    string st = "ladu";
    string st2;
    //opening file using  constructor and writing  it 
     ofstream out("sample60.txt"); // write operation 
     out<<st;

    //opening file using  constructor and reading it 
    // ifstream in("sample60b.txt"); // read operation 
    // in>>st2;
    // getline(in, st2);
    // cout<<st2;
    return 0;
}
