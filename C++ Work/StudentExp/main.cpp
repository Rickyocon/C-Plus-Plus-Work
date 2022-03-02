#include <iostream>
using namespace std;
#include "Student.h"


int main()
{
  Student s;
  cout<<s<<endl;
  //inputStudent(s)
  s.inputStudent();
  //print(s)
  s.print();
  //////////
  cout<<"invaild id returned: "<<s.getId()<<endl;
  cout<<"get gradYear returned: "<<s.getGradYear()<<endl;
  if(s.setId(100)==1)
  {
    cout<<"Too small"<<endl;
  }
  return 0;
}
