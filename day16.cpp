// ****INLINE FUNCTIONS, DEFAULT ARGUMENTS & CONSTANT ARGUMENTS IN C++****

// #include<iostream>
// using namespace std;
// // inline function----> use inline function when the code is small.
//  inline int product(int a,int b){
//     // Not recommended to use below lines with the inline function.
// /*  static int c=0; // this executes only 1 time. the value of c is retained.

//     c=c+1;          //this updates the value of c after every print.
//     return a*b+c; */   

//     return a*b;
// }
// int main(){
//     int a,b;
//     cout<<"enter the value of a and b : "<<endl;
//     cin>>a>>b;
//     cout<<"the product of a and b is : "<<product(a,b)<<endl;
//     cout<<"the product of a and b is : "<<product(a,b)<<endl;
//     cout<<"the product of a and b is : "<<product(a,b)<<endl;
//     cout<<"the product of a and b is : "<<product(a,b)<<endl;
//     cout<<"the product of a and b is : "<<product(a,b)<<endl;
//     cout<<"the product of a and b is : "<<product(a,b)<<endl;
//     cout<<"the product of a and b is : "<<product(a,b)<<endl;
//     cout<<"the product of a and b is : "<<product(a,b)<<endl;

//     return 0;
// }

   //      --------> to comment out press control  <--------------


#include<iostream>
using namespace std; 
float money_recieved(int curent_money,float factor =1.04)  // here: factor is a default value.Also, default argument should be in the right and compulsory argument should be in the left.
{  
    return curent_money*factor;
}

// constant arguments:
/* int str_len(const char*p){

}*/
int main(){
    int money;
    cin>>money;
    cout<<"If you have "<<money<<"s in your bank account you will recieve "<<money_recieved(money)<<"rs after 1 year of duration."<<endl;
    cout<<"FOR VIP: If you have "<<money<<"rs in your bank account you will recieve "<<money_recieved(money,1.10)<<"rs after 1 year of duration."<<endl;
    return 0;
}
