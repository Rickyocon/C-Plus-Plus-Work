#include<iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Queue q;

    //loop and populate queue
    const int amount = 5;
    const int N = amount + 1;
    for(int i=0;i<N;i++)
    {
        q.enqueue(i);
    }

    cout<<"--------------------------------------"<<endl;
    cout<<"testing to see if front was a success"<<endl;
    q.front();

    //display queue
    cout<<"--------------------------------------"<<endl;
    cout<<"Here is the queue before dequeue"<<endl;
    q.display(cout);
    cout<<"--------------------------------------"<<endl;
    cout<<"This is the queue after removing front of queue(dequeue)"<<endl;

    q.dequeue();
    q.display(cout);


    return 0;

    //int arrSize = sizeof(myArray);
    //cout<<"The length of the array is: "<<arrSize<<endl;
}
