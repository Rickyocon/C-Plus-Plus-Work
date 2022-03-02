#include "Tree.h"

Tree::Tree()
{
  root = 0;
  
}

bool Tree::insert(DataType data)
{
  if(isEmpty())
  {
    root = new Node; 
    root->data = data;
    root->left =  root->right = 0;
    return true;
  }
  Node *temp = root;
  Node *prev = 0;
   while(temp!=0)
  {
    prev = temp;
    if(data<temp->data)
       temp = temp->left;
    else(data>temp->data)
       temp = temp->right;
    else
      {
       cerr<<"data exists: " <<data<<std::endl;
       return false;
      }
  }  
  //when while loop done prev should point to insertion point
  if(data<prev->data)
   {
    prev->left = new Node;
    prev->left->data = data;
    prev->left->left = 0;
    }
  else
  if(data>prev->data)
    {
    prev->right = new Node;
    prev->right->data = data;
     }

}
Tree::-Tree()
{
  //traverse tree and delete elements
  
}
