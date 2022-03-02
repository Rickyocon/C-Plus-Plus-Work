class Student
{

public:
  bool print();
  bool inputStudent();
  //id getter and setter
  unsigned long getId();
  int setId(unsigned long newId);


private:
  //data
  char major[15];
  char firstName[10];
  char lastName[10];
  unsigned long id;
  char gender[4];
  unsigned short gradYear;
};

