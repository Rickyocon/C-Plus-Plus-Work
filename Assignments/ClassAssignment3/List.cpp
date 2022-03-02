
#include <iostream>
#include "List.h"

using namespace std;

List::List()
{
  m_first = 0;
}


void List::insert(DataType data)
{
  // allocate new node
  Node *nPtr = new Node;
  // set data
  nPtr-> m_data = data;
  // point to previous first
  nPtr-> m_next = m_first;
  // make first point to new node
  m_first = nPtr;
  

}

void List::insertByPos( DataType data, int pos)
{
  // if pose < 1 then insert at head
  if (pos < 1)
  {
    insert(data);
    return;
  }
  // else if pos >= 1
  // search for pos to nsert
  Node *tempPtr = m_first;
  for( int i = 0; i < pos-1; i++)
  {
    tempPtr = tempPtr->m_next;
  }
  
  // create a new node and insert data
  Node *newNode = new Node;
  newNode->m_next = tempPtr->m_next;
  newNode->m_data = data;
  // connect new node to the old next pointer
  newNode->m_next = tempPtr->m_next;
  // connect the ends of the new 
  tempPtr->m_next = newNode;
}

bool List::deleteByPosition(int pos)
{
  // if linked list is empty
  if ( m_first == 0)
  { cout << "List is empty" << endl;
    return false;
  }
  else
  {
  // search for pos to delete
   Node *tempPtr = m_first;
   for( int i = 0; i < pos-1; i++)
    tempPtr = tempPtr->m_next;
   Node *deleteNode = tempPtr->m_next;
   tempPtr->m_next =deleteNode->m_next; 
  // delete existing Node
   delete deleteNode; 
   return true;
  }
}

bool List::deleteByValue(DataType data)
{
  Node *tempPtr = m_first;
  while ( tempPtr->m_data != data )
  {
    tempPtr = tempPtr->m_next;
  
  if ( tempPtr == NULL)
    { cout << "Value not found" << endl;
      return false;
    }
  }

  Node *deleteNode = tempPtr->m_next;
  tempPtr->m_next =deleteNode->m_next; 
  delete deleteNode;
  return true; 

}

void List::display(std::ostream &out)
{
  Node *tempPtr = m_first;
  while(tempPtr != 0)
  {
    out <<tempPtr->m_data <<" ";
    tempPtr = tempPtr-> m_next;
  }
  out << std:: endl;
}
