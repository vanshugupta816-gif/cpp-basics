// ****BREAK AND CONTINUE STATEMENT IN C++ **** 

#include<iostream>
using namespace std;
int main(){
   /* for (int i= 0;i<8; i++)  
    {
       cout<<i<<endl;  
        if(i==3){
            break;        // this will only print upto '3' as mentioned.
        }
    }*/
    
 /*for (int i= 0;i<8; i++)
    {
        if(i==3){
            break;         // it breaks the loop when it reaches '3' as mentioned .
        }
        cout<<i<<endl; 
    }*/
    
for(int i=0;i<40;i++){
    if(i==3){
        continue;         // 'continue' restarts the loop when it reaches '3' as mentioned. 
    }
     cout<<i<<endl; 
}

    return 0;
}
