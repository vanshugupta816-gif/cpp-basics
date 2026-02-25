// ****MAP IN C++ STL****

#include<iostream>
#include<map>
#include<string>
using namespace std;

// map is an associative array
int main(){
    map<string, int> marksMap;
    marksMap["vanshu"] = 98;
    marksMap["motu"] = 59;
    marksMap["pookie"] = 2;

    marksMap.insert({{"kozume"s, 169}, {"kuroo", 187}});
    map<string, int> :: iterator iter;
    for (iter=marksMap.begin();  iter!=marksMap.end ();iter++){
          cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"the size is:"<<marksMap.size()<<endl;
    cout<<"the max size is:"<<marksMap.max_size()<<endl;
    cout<<"the empty's return value is:"<<marksMap.empty()<<endl;
    return 0;
}
