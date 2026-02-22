// ******* C++ : FILE I/O [READING & WRITING TO A FILE]*******
// --> 3 useful classes             |
// 1. fstreambase                   |
// 2. ifstream -> derived from (1)  |   <fstream>
// 3. ofstream -> derived from (1)  |

// --> read operatiom                 --> write operation 
// ifstream in (" this.txt");             ofstream out ("this.txt");
// string st;                             string st = " vanshu";
// in>>st; // just like cin               out<<st; // just like cout / writes to a file this txt|

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // connencting our file with hout stream
     ofstream hout("sample60.txt");

    // creating a name string and filling it with the string  entered by the user
     cout<<"enter your name";
     string name;
     cin>>name;

    //writing a string to the file
     hout<<name + " is  my name";
     hout.close();

     ifstream hin("sample60.txt");
     string content;
     hin>>content;
     cout<<"the content of this file is:"<<content;
     hin.close();

    return 0;
}
