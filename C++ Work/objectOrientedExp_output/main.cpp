#include <iostream>
#include "Student.h"
using namespace std;


int main()
{
  Student s;
  //inputStudent(s)
  s.inputStudent();
  //print(s)
  s.print();
  //////////
  if(s.setId(100)==1)
  {
    cout<<"invaild id returned: "<<s.getId()<<endl;
    cout<<"Too small"<<endl;
  }
  return 0;
}
