#include "List.h"
//--------------------
#include<iostream>
using namespace std;
//--------------------


List::List()
{
    first = 0;
    
}

//---------------------------------------------------------

void List::insert(DataType data)
{
    //create a new node
    Node *newNodePtr = new Node;
    //put data in new node
    newNodePtr->data = data;
    //next pointer in new node = first
    newNodePtr->next = first;
    //make first point to the new node
    first = newNodePtr;    
}

//---------------------------------------------------------

void List::display()
{
    //point to the begining of the list
    Node *tempPtr = first;
    //traverse list one element at a time and print data 
    while(tempPtr!=0)
    {
        cout<<tempPtr->data<<endl;
        tempPtr = tempPtr->next;
    }
    //when you reach the end return from function
    Node *currNode = tempPtr;
    while(currNode != NULL)
    {
        currNode = currNode->next;
    }
} 

//----------------------------------------------------------

bool List::insert(DataType data,int position)
{
    //first check if list is empty and handle accordiningly
    if(empty())
    {
        insert(data);
        return true;
    }
    else
    if(position<0)
    {
        cerr<<"ERROR: negitive position"<<endl;
        return false;
    }    
    //else
    //find/point to the begining of the list (the begining is first)
    Node *tempPtr = first;
    int index = 0;
    //traverse the list and search for insert position
    while(tempPtr!=0 && ((index+1)<position))
    {
        tempPtr = tempPtr->next;
        index++;
    }
    //check if position was illegal
    if(tempPtr==0)
    {
        cerr<<"ERROR: Position was too large: "<<position<<endl;
        return false;
    }
   

    //in any other case just go ahead and add the new node
    


    //insert new node at pos
    //create a new node
    Node *newNodePtr = new Node;
    //put the data in the new node
    newNodePtr->data = data;
    //next pointer in new node = first
    newNodePtr->next = tempPtr->next;
    //make first point to the new node
    tempPtr->next = newNodePtr;
    return true;
}

//----------------------------------------------------------

//deconstructor (realease memory)
List::~List()
{
    Node *tempPtr = first;
    cout<<"Deleteing list used for testing functions"<<endl;
    while(tempPtr!=0)
    {
        cout<<"in loop, deleteing value: "<<tempPtr->data<<endl;
        Node *tempPtrNext = tempPtr->next;
        delete tempPtr;
        tempPtr = tempPtrNext;
    }
    cout<<"Memory has been realeased, list was deleted"<<endl;
    cout<<"------------------------------------"<<endl;
}

//-----------------------------------------------------------

bool List::deleteByValue(DataType data)
{
    Node *tempPtr = first;
    while (tempPtr->data != data)
    {
        tempPtr = tempPtr->next;

     //if fail
     if(tempPtr == NULL)
     { 
        cout<<"Value not found"<<endl;
        return 1;   
     }
    }

    Node *deleteNode = tempPtr->next;
    tempPtr->next = deleteNode->next;
    delete deleteNode;

    //if succcess
    return 0;
}

//----------------------------------------------------------


bool List::insertAtEnd(DataType data)
{
   Node *tempPtr = first;
   Node *newNodePtr = new Node; //creating new node
   newNodePtr->data = data; //seting new node value
   newNodePtr->next = NULL;
   if(tempPtr == NULL)
   {
       tempPtr = newNodePtr;
       cerr<<"There was an Error"<<endl;
       return 1;
   }
   else
   {
       Node *currNode = tempPtr;
       while(currNode->next != NULL)
       {
           currNode = currNode->next;
       }
       currNode->next = newNodePtr;
   }
}    
