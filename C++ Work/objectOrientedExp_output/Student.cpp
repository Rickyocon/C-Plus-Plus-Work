#include <iostream>
#include "Student.h"
using namespace std;


bool Student::print()
{
  cout<<"Last Name      : "<<lastName<<endl
      <<"First Name     : "<<firstName<<endl
      <<"Student ID     : "<<id<<endl
      <<"Major          :"<<major<<endl
      <<"Graduation Year: "<<gradYear<<endl
      <<"Gender         : "<<gender<<endl;

  return true;
}


bool Student::inputStudent()
{
  cout<<"Enter Last Name: ";
  cin>> lastName;
  cout<<"Enter first Name: ";
  cin>> firstName;
  cout<<"Student ID: ";
  cin>> id;
  cout<<"Enter major: ";
  cin>> major;
  cout<<"Enter Graduation year: ";
  cin>> gradYear;
  cout<<"Enter Gender: ";
  cin>> gender;
}

unsigned long Student::getId()
{
  return id;
}




int Student::setId(unsigned long newId)
{
  if(newId>1000000)
  {
    id = newId;
    return 0;
  }
  else
  {
    //cerr<<"bad id"<<endl;
    return 1;
  }

}


