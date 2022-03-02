#include<iostream>
using namespace std;
//-------------------
#include "List.h"
//------------------


int main(){

    //test insert
    cout<<"------------------------------------"<<endl;
    cout<<"Begin test 1"<<endl;
    List l;
    const int N = 10;

    for(int i=0;i<N;i++)
    {
        l.insert(i);
    }

    l.display();
    cout<<"End of test 1"<<endl;
    cout<<"------------------------------------"<<endl;
     
    //test insert position
    cout<<"Begin test 2"<<endl;    
    List l2;
    for(int i=0;i<N;i++)
    {
        l2.insert(i+1,i);
    }
    l2.display();
    cout<<"End of test 2"<<endl;
    cout<<"------------------------------------"<<endl;

    //test error cases 
    cout<<"Begin test 3(negitive test)"<<endl;
    l2.insert(100,-10);
    cout<<"End of test 3"<<endl;


    cout<<"------------------------------------"<<endl;
    cout<<"Begin test 4(out of bounds)"<<endl;
    l2.insert(100,N+10);
    cout<<"End of test 4"<<endl;
    cout<<"------------------------------------"<<endl;
    
    cout<<"------------------------------------"<<endl;
    cout<<"Begin test 5(DeleteByVlaue)"<<endl; 
    List l3;
    for(int i=0;i<N;i++)
    {
        l3.insert(i+1,i);    
    }
    int valDelete = 2; //This is the number you want to be removed from the list
    l3.deleteByValue(valDelete-1);  
    l3.display();
    cout<<"Test was a success"<<endl;
    cout<<"End of test 5"<<endl;
    cout<<"------------------------------------"<<endl;

    cout<<"Begin test 6(insert at end)"<<endl;
    l2.insertAtEnd(4);
    l2.display();
    cout<<"Test was a success"<<endl;
    cout<<"End of test 6"<<endl;
    cout<<"------------------------------------"<<endl;
   
    return 0;

}
