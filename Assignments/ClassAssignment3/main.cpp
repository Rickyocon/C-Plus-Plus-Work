
#include <iostream>
using namespace std;

#include "List.h"


int main()
{
  List l1;
 
  const int Size = 10;
  for( int i = 0; i <Size; i++)
    l1.insert(i);

  // test insertByPos
  
  l1.insertByPos(9,2);
  l1.display(cout);
  

  l1.deleteByPosition(4);
  l1.display(cout);
  
  l1.deleteByValue(7);  
  l1.display(cout);  
 
  return 0;
}
