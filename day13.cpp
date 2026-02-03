// ****STRUCTURES, UNION & ENUMS IN C++ ****


// #include<iostream>
// using namespace std;

// // ***********sruct*******************

// /*typedef*/ struct employee{  // by writing type def we can write 'ep' instead of stuct employee in future . 
//     int eID; // assume-> size(4)
//     float salary;    //  size(1)     ----------> struct uses total size (9)-bytes.
//     char favourite_char; // size(4)
//     }; /*ep*/
//     int main(){
//     /*ep*/ struct employee vanshu;  // 'ep' (if used above) can be used instead of stuct employee.       
//            struct employee ladu;
//         vanshu.eID = 1;
//         vanshu.salary = 500000;
//         vanshu.favourite_char = 'c';
//         cout<<"the eID of vanshu is "<<vanshu.eID<<endl;
//         cout<<"the favourite_char of vanshu is "<<vanshu.favourite_char<<endl;
//         cout<<"the salary of vanshu is "<<vanshu.salary<<endl;


//     return 0;
// }    
  
//      --------> to comment out press control   <--------------



/*#include<iostream>
using namespace std;

 // ************ UNION **************
  
  // for eg: we are in village where dowry system exists.
   union money{
  int rice; //assume size(4)
  char car;      //  size(1)    ----------> union uses max. bytes size that is 4 bytes here.
  float pounds;   // size(4)
  };
   int main(){
    union money m1;
    m1.rice=5; 
    cout<<m1.rice<<endl; // we have to print the value as we given above. else,we will get garbage value.  
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
     // ************ ENUM *************
    enum meal {breakfast,lunch,dinner};  //{breakfast,lunch,dinner} = {0,1,2}.
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    meal m1=lunch;
    cout<<m1<<endl;

    meal m2= dinner;
    cout<<(m2==1);   // if condition will true then it will show 1 else 0.
    
    return 0;
}

    
