#include "../include/ArrayStack.h"
#include <iostream>

bool ArrayStack::isEmpty()
{
    if (topindex == -1)
    {
        return true;
    }
    else
        return false;
}
bool ArrayStack::isFull()
{
    if (topindex == MaxStackSize - 1)
    {
        return true;
    }
    else
        return false;
}
void ArrayStack::push(int a)
{
    if (!isFull())
    {
        topindex++;
        data[topindex] = a;
    }
    else
        std::cout << "The stack is full" << std::endl;
}
void ArrayStack ::pop()
{
    if (!isEmpty())
    {
        std::cout << "The removed data is: " << data[topindex] << std::endl;
        topindex--; // the topindex reduces by 1 so that the data can be replaced by push operation after pop
        // it is equivalent to delete
    }
    else
        std::cout << "The stack is empty. " << std::endl;
}
int ArrayStack::peek()
{
    if (!isEmpty())
    {
        return data[topindex];
    }
    else
        return 0;
}
