struct Student
{
  //data
  char major[5];
  char firstName[10];
  char lastName[10];
  unsigned long id;
  char gender[4];
  unsigned short gradYear;
};

bool print(Student s);
bool inputStudent(Student &s);
