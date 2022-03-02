#include<iostream>
#include "Array.h"
using namespace std;
//-----------------------

int main(){

    Array arr;
    cout<<"Using default constructor, size is: "<<arr.getSize()<<endl;
    cout<<"Use explicit size constructor"<<endl;
    Array arr2(1000);
    cout<<"Using explicit constructor, size is: "<<arr2.getSize()<<endl;

    //Test square brackets operator
    DataType x = arr2[7];
    cout<<"Array value at loc before change: "<<arr2[7]<<endl;
    arr2[7] = x + 1;
    cout<<"Array value at loc after change: "<<arr2[7]<<endl;
   
    //test illegal access
    const SizeType BadIndex = 20000;
    
    try
    {
        arr2[BadIndex] = 10;
    }
    catch(...)//this is used to catch anything (...)
    {
        cout<<"Caught an exception, moving forward" <<endl;
    }
    cout<<"All is well, program is ending"<<endl;

    return 0;
}
