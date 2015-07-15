//Ryan Andrews		Date: 4/29/14
//Class: CS 54		Section: A

//POEM: 
/*
//Bits are tiny
//Bytes are not
//Coding works when you think naught
//But be sure to debug lots
//Or you might end up all hot
*/
#ifndef STACK_H
#define STACK_H
using namespace std;

const int MAX = 256;
//Maximum number of values that can be in the stack

template <class T>
class Stack
{
  private:
    T m_Items[MAX];
    int m_Size;
  public:
    Stack():m_Size(0){};
    bool Push(const T ToPush);
    T Pop();
    bool Top(T & TopItem);
    int Size()const {return m_Size;}
    bool isEmpty()const {return m_Size == 0;}
    bool isFull()const {return m_Size == MAX;}
};

#include "Stack.hpp"

#endif
