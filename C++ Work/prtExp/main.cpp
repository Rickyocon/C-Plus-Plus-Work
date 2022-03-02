#include <iostream>
using namespace std;



int main()
{
  
  cout<<"Size of int is: "<<sizeof(int)<<endl;

  double d;

  int i;

  int j;

  double d2;

  i = 10;
  j = 20;

  d = 2.1;
  d2 = 2.2;

  cout<<"the adress of i is: "<<&i<<endl;
  cout<<"the adress of j is: "<<&j<<endl;
  cout<<"the adress of d is: "<<&d<<endl;
  cout<<"the adress of d2 is: "<<&d2<<endl;

  // declair pointers
  int *iPtr;
  iPtr = &i;
  cout<<"This is the adress that iPtr holds is: "<<iPtr<<endl;
  cout<<"The value that sits at the address that iPtr points to is: "<<*iPtr<<endl;
  *iPtr = 21;
  cout<<"The value that sits at the address that iPtr points to is: "<<*iPtr<<endl;
  cout<<"The value of i is: "<<i<<endl;  



  return 0;

}
