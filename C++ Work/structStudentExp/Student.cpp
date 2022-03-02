#include <iostream>
#include "Student.h"
using namespace std;


bool print(Student s)
{
  cout<<"Last Name      : "<<s.lastName<<endl
      <<"First Name     : "<<s.firstName<<endl
      <<"Student ID     : "<<s.id<<endl
      <<"Major          :"<<s.major<<endl
      <<"Graduation Year: "<<s.gradYear<<endl
      <<"Gender         : "<<s.gender<<endl;

  return true;
}


bool inputStudent(Student &s)
{
  cout<<"Enter Last Name: ";
  cin>> s.lastName;
  cout<<"Enter first Name: ";
  cin>> s.firstName;
  cout<<"Student ID: ";
  cin>> s.id;
  cout<<"Enter major: ";
  cin>> s.major;
  cout<<"Enter Graduation year: ";
  cin>> s.gradYear;
  cout<<"Enter Gender: ";
  cin>> s.gender;

}
