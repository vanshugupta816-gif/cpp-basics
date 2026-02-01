// ****FOR,WHILE AND DO-WHILE LOOPE IN C++

#include <iostream>
using namespace std;
int main()
{

  //*********** For loop *********

  /* for(int i=1;i<=100;i++){
    cout<<i<<endl;
    }*/

    

  //***** Example of infinite loop ********

  /*for(int i=1;34<45;i++){
     cout<<i<<endl;
  }*/

  //*********** While loop *********

  /*int i=1;
  while (i<=40)      // printing 1 to 40
  {
    cout<<i<<endl;
    i++;
  }*/

  //*********** Example of infinite while loop *********

  /*int i=1;
  while(true){
      cout<<i<<endl;
      i++;
  }*/

  //*********** Do while loop *********

  int i = 1;
  do
  {
    cout << i << endl; // printing 1 to 40
    i++;
  } while (i <= 40);

  return 0;
}
