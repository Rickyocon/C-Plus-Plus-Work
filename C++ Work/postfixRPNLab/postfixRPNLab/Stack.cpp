/*
 * Stack.cpp
 *
 *  Created on: Oct 26, 2017
 *      Author: h702533437
 */


#include <iostream>
#include <new>
using namespace std;

#include "Stack.h"


//--- Definition of Stack constructor
Stack::Stack()
: myTop(0)
{}

//--- Definition of Stack copy constructor
Stack::Stack(const Stack & original)
{
   myTop = 0;
   if (!original.empty())
   {
      // Copy first node
      myTop = new Stack::Node(original.top());

      // Set pointers to run through the stack's linked lists
      Stack::NodePointer lastPtr = myTop,
                         origPtr = original.myTop->next;

      while (origPtr != 0)
      {
         lastPtr->next = new Stack::Node(origPtr->data);
         lastPtr = lastPtr->next;
         origPtr = origPtr->next;
      }
   }
}

//--- Definition of Stack destructor
Stack::~Stack()
{
   // Set pointers to run through the stack
   Stack::NodePointer currPtr = myTop,  // node to be deallocated
                      nextPtr;          // its successor
   while (currPtr != 0)
   {
      nextPtr = currPtr->next;
      delete currPtr;
      currPtr = nextPtr;
   }
}

//--- Definition of assignment operator
Stack & Stack::operator=(const Stack & original)
{
   myTop = 0;
   if (original.empty()) return *this;

   if (this != &original)     // check that not st = st
   {
      this->~Stack();         // destroy current linked list

      // Copy first node
      myTop = new Stack::Node(original.top());

      // Set pointers to run through the stacks' linked lists
      Stack::NodePointer lastPtr = myTop,
                         origPtr = original.myTop->next;

      while (origPtr != 0)
        {
          lastPtr->next = new Stack::Node(origPtr->data);
          lastPtr = lastPtr->next;
          origPtr = origPtr->next;
        }
   }
   return *this;
}

//--- Definition of empty()
bool Stack::empty() const
{
   return (myTop == 0);
}

//--- Definition of push()
void Stack::push(const StackElement & value)
{
   myTop = new Stack::Node(value, myTop);
}

//--- Definition of display()
void Stack::display(ostream & out) const
{
   Stack::NodePointer ptr;
   for (ptr = myTop; ptr != 0; ptr = ptr->next)
      out << ptr->data << endl;
}

//--- Definition of top()
StackElement Stack::top() const
{
   if (!empty())
      return (myTop->data);
   else
   {
      cerr << "*** Stack is empty "
              " -- returning garbage ***\n";
      return *(new StackElement);   // "Garbage" value
   }
}

//--- Definition of pop()
void Stack::pop()
{
   if (!empty())
   {
      Stack::NodePointer ptr = myTop;
      myTop = myTop->next;
      delete ptr;
   }
   else
      cerr << "*** Stack is empty -- can't remove a value ***\n";
}

