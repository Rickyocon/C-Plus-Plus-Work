#include<iostream>
#include "Array.h"
using namespace std;
//-------------------------------------

Array::Array()
{
    reset();
}

//-------------------------------------
void Array::setSize(SizeType size)
{
    cerr<<"setsize-1: size"<<size<<"m_size=="<<m_size<<endl;
    //if array exist first delete it
    if(m_array !=0)
        deleteArray();
    cerr<<"setsize-1"<<endl;
    //if size is valid allocate a new array
    if(size>0)
    {
        m_array = new DataType[size];
        m_size  = size;
    }
    else
        cerr<<"Size was illegal"<<endl;
    }

//------------------------------------
void Array::deleteArray()
{
    cerr<<"deleteArray-1"<<endl;
    if(m_array!=0)
    {
        cerr<<"deleteArray-2: m_array=="<<m_array<<"m_size=="<<m_size<<endl;
        delete []m_array;
        cerr<<"deleteArray-3"<<endl;
        m_size  = 0;
        m_array = 0;
    }
    else
    {
       cerr<<"Cannot delete"<<endl;
    }
}
//------------------------------------
void Array::reset()
{
    m_size  = 0;
    m_array = 0;

}
//------------------------------------
Array::Array(SizeType size)
{
    reset();
    cerr<<"inside explicit constructor - 1"<<endl;
    setSize(size);
    cerr<<"inside explicit constructor - 2"<<endl;
}
//-----------------------------------
