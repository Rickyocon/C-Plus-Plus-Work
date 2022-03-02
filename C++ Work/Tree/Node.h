#ifndef NODE_H
#define NODE_H

typedef int DataType;

class Node 
{
public:
  Node() { left = right = 0; data = 0;  }
  DataType data;
    //children
  Node *left;
  Node *right;
  

};


#endif //NODE_H
