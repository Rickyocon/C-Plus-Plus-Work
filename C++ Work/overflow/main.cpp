#include<iostream>
using namespace std; //this is to "use" namespace so you dont need to keep doing std

int main()
{
  cout<<"size of int is:"<<sizeof(int)<<endl;
  cout<<"size of long is:"<<sizeof(long)<<endl;
  long number = 1;
  for (int i = 1; i <= 65; i++)
  {
    cout << number << endl;
    number = number * 2;
  }
  return 0;

}
