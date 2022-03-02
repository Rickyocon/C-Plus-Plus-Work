#include<iostream>
using namespace std;

//int glblVar;

void mySwap(int first, int second)
{
  int temp = first;
  first = second;
  second = temp;
}



void mySwapRef(int & first, int & second)
{
  int temp = first;
  first  = second;
  second = temp;
}



void mySwapPtr(int *firstPtr, int *secondPtr)
{
  int temp   = *firstPtr;
  *firstPtr  = *secondPtr;
  *secondPtr = temp;
}



int main()
{
  int x = 1;
  int y = 2;

  cout<<"before swap x="<<x<<" y="<<y<<endl; 
  //call swap with copy
  //mySwap(x,y);
  //call swap with reference
  //mySwapRef(x,y);
  //call mySwap using pointers
  mySwapPtr(&x,&y);
  cout<<"after swap x="<<x<<" y="<<y<<endl; 
 
  return 0;
}
