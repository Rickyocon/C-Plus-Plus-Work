#include<iostream>
using namespace std;

//typedef int PtrType2;

typedef long PtrType;

int main() 
{
  /*cout<<"Size of int is: "<<sizeof(PtrType)<<endl;
  PtrType *ptr;
  ptr = new PtrType[10];
  cout<<"The adress iPtr is pointing to = "<<ptr<<endl;  
  ptr+=1;
  cout<<"The adress iPtr is pointing to = "<<ptr<<endl;  
  */

  char *cPtr;
  long totalMemAllocated = 0;
  long singleMemAllocated = 1024;
  while(true)
  {
    cPtr = new char[singleMemAllocated];
    totalMemAllocated += singleMemAllocated;
    cout<<"TotalMemAlloctaed= "<<totalMemAllocated<<endl;
  }


  return 0;
}
