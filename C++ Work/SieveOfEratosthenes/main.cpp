#include<iostream>
#include "sieve.h"
using namespace std;
//---------------------------


int main(){

    int lower,upper,i;
    cout<<"Enter starting number: ";
    cin>>lower;
    cout<<"Enter a ending number: ";
    cin>>upper;
    cout<<"The Prime numbers inbetween the numbers you entered are: "<<endl;
    
    for(i=lower;i<=upper;i++)   
    {
        Prime(i);
    }

}
