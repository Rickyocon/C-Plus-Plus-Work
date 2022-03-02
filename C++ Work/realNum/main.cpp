#include <iostream>
#include <cmath>


using namespace std;

int main()
{
  float num = 0.0;
  while(fabs(5.0-num)>0.01)
  {
    num += 0.1;
    cout<<num<<endl;
  }
  return 0;
}
