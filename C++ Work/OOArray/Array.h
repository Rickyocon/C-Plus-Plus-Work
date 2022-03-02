#ifndef ARRAY_H
#define ARRAY_H
#include<stdexcept>
#include<iostream>
//----------------------------------------------------------------------

typedef int DataType;
typedef unsigned int SizeType;

//----------------------------------------------------------------------

class Array{

public:
    Array();
    Array(SizeType size);
    void reset();
    SizeType getSize() { return m_size; } //inline function
    void setSize(SizeType size);
    void deleteArray();
    DataType &operator[](SizeType index)
    { 
        if(index<m_size)
        {
            return m_array[index]; 
        }
        else
        {
            std::cerr<<"illegal index specified: "<<index<<std::endl;
            throw std::runtime_error("illegal index specified");
        }
    }

private:
    DataType *m_array;  //m_ is a nameing convention for member functions
    SizeType m_size;   //m_ is a nameing convention for member functions

};

//----------------------------------------------------------------------
#endif //ARRAY_H
