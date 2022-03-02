#ifndef LIST_H
#define LIST_H
//------------------------
#include "Node.h"
//------------------------

class List{

public:
    List();
    bool empty() { return first==0; }
    void insert(DataType data);
    bool insert(DataType data, int position);
    void display();
    bool deleteByValue(DataType data);
    bool insertAtEnd(DataType data);
    ~List();

private:
    Node *first;
};

//-----------------------
#endif //LIST_H
