#include <iostream>
using namespace std;
//-------------------
int anyBaseToDecimal(int num, int b);
//-----------------------------------

int main (){
    int num, b;
    //Store the array into a char 
    char Test[num];
    //get user input for number and put it into num
    cout<<"Type a number you want to convert: ";
    cin>>num;
    //get input from user and store it in b
    cout<<"Type the base of that number: ";
    cin>>b;
    //print out the conversion
    cout<<"Decimal form of "<<num<<" is "<<anyBaseToDecimal(num,b)<<endl;
    return 0;


}
//------------------------------------------------------------------
//function that does the calculations
int anyBaseToDecimal(int num, int b){
    int n = 1,sum = 0;
    while(num>0){
        sum = sum+num%10*n;
        n = n*b;
        num = num/10;
    }
    return sum;

}
