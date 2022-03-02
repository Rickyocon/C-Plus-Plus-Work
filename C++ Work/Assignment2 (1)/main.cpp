//This program takes any number at any base
// between 2 and 36 and returns it at a decimal base

#include <iostream>
using namespace std;

const int MAX_NUM_OF_DIGITS = 10;

//This function accepts a char value and then returns its int value
//This is achived the ASCII code value to the character and
//converting it to an int
//For example '4' is returned as 4
//B is returned as 12

int val(char c) 
{ 
    if (c >= '0' && c <= '9') 
        return ((int) (c - '0')); 
    else
        return ((int) (c - 'A' + 10)); 
}

//This is a very simple function that accepts an array,
// Partially filled or fully filled and returns the length of it
//For example if the user inputs 12345, the length 5 will be returned
//Even though the array has size 10
//This function is very practical when dealing with partially filled arrays

int length(char num[])
{
 int len;
 for(int count =0; count < MAX_NUM_OF_DIGITS && num[count] != 0 ;count++)
 {len += 1;}
  
  
    return len;
}


int Deci(char num[],int base, int len)
{
  //Initialize power
 
  int power = 1;
 
  //Initialize sum
 
  int sum = 0;
 
  //Loop over char array
 
   for(int i = len-1 ; i >= 0 && num[i] != 0; i--)//I gets the number (length of array)-1 because since we are goign backwards in our loop         
  {                                              //an array with length three will have value 0 at array[3] therefore digit number 3
                                                 // of the array is accessed with array[2] 
    
     //This if statement returns an error if the bsae entered is higher 
     //than any digit composing the number entered by the user
     //for example 6 cannot be at base 5 or 12345 cannot be at base 5 
     if (val(num[i]) >= base) 
        {  
          //returning -1 will get an if statement to display the user a message explaining what went wronf
          return -1; 
        }

    //These lines convert the entered number into a decimal
    //Each time the val function is called, returning the int value
    //of the given char
    sum += val(num[i]) * power;//Ex if 123 at base 5 was enterd  
                               //firt iteration power = 1 sum = 3*1 =3
                               //second iteration power = 5 sum = 3 + 2*5 = 13
                               //third iteration power = 25 sum = 13 +1*25 = 38   123(5) = 38(10)
    power = power * base; 
  }
  return sum;

}



int main()
{
  char num[MAX_NUM_OF_DIGITS];
  int base;
   
  cout << "Please enter a non negative integer: ";
  cin >> num;
 
  cout << "Please enter the base of the number(2-36): ";
  cin >> base;
  
  //Calls the length function 
  int  Length = length(num);  
  
  //Calls the function in charge of converting the base of the given number
  int answer = Deci(num, base, Length);

  //If -1 was returned by the Decimal function
  // It means a wrong base was entered, the user will be notified
  if(answer == -1)
  {
    cout << "Invalid base -- The base entered was either equal or smaller than the number itself" << endl;
  }
  
  //Otherwise the number to base ten will be displayed
  else
  { 
     cout <<" The number you entered at base 10 is:" << answer << endl;
   } 
  
  return 0;
}



