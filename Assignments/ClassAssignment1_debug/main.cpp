#include <iostream> 




const float
MyConstantValue = 9.9;

int testFunc1()
{
return MyConstantValue * 2;
}

int testFunc2(int val)
{
return val*testFunc1();
}

int testFunc3(int y)
{ 
int x =4;
return testFunc2(x)*testFunc2(y);
}

int main()
{
std::cout<<"!!!Hello Errors!!!"<<std::endl;
int result = testFunc3(10); 
std::cout<<"Result="<<result<<std::endl;
return 0;
}

