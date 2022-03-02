#ifndef TREE_H
#define TREE_H
#include <iostream>
#include "Node.h"
class Tree
{
public:
  Tree();
  bool isEmpty() { return root==0; }
  bool insert(DataType data);
  void display(std::iostream os);
  void display(std::ostream
private:
  Node *root;

};




#endif //TREE_H
