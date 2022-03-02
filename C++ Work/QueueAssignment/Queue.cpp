/*-- Queue.cpp-----------------------------------------------------------
 
   This file implements Queue member functions.

-------------------------------------------------------------------------*/
//Declarations
#include <iostream>
#include <cstdlib>
using namespace std;
#include "Queue.h"
//-----------------------------------------------------------------------


//--- Definition of Queue constructor
Queue::Queue()
: myFront(0), myBack(0)
{}

//--- Definition of empty()
bool Queue::empty() const
{ 
   return (myFront == myBack); 
}

//--- Definition of enqueue()
void Queue::enqueue(const QueueElement & value)
{
   int newBack = (myBack + 1) % QUEUE_CAPACITY;
   if (newBack != myFront)     // queue isn't full
   { 
      myArray[newBack] = value;
      myBack = newBack;
      cout<<"Back was a success"<<endl;
   }
   else
   {
      cerr << "*** Queue full -- can't add new value ***\n"
              "Must increase value of QUEUE_CAPACITY in Queue.h\n";
      exit(1);
   }
}

//--- Definition of display()
void Queue::display(ostream & out) const
{
   for (int i = myFront+1; i != myBack+1; i = (i + 1)%QUEUE_CAPACITY) 
      out << myArray[i] << "  ";
   cout << endl;
}

//--- Definition of front()
QueueElement Queue::front() const
{
   if ( !empty() ) 
   {
      cout<<"Front was a success"<<endl;
      return (myArray[myFront]);
   }
   else
   {
      cerr << "*** Queue is empty "
              " -- returning garbage value ***\n";
      return myArray[QUEUE_CAPACITY-1]; // "Garbage" value
   }
}

//--- Definition of dequeue()
void Queue::dequeue()
{
   if ( !empty() )
   {
      myFront = (myFront + 1) % QUEUE_CAPACITY;
      cout<<"Dequeue was a success"<<endl;
   }
   else
   {
      cerr << "*** Queue is empty -- "
              "can't remove a value ***\n";
      exit(1);
   }
} 
