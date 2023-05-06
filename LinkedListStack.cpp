#include "../include/LinkedListStack.h"
#include <iostream>
void LinkedListStack::createStack(int a)
{
    LinkedListStack *newNode = new LinkedListStack(a);
    HEAD = TAIL = newNode;
}
bool LinkedListStack::isFull()
{
    std::cout << "The linked list is never full. " << std::endl;
    return 0;
}
bool LinkedListStack::isEmpty()
{
    if (HEAD == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void LinkedListStack ::push(int a)
{
    LinkedListStack *newNode = new LinkedListStack(a, HEAD);
    HEAD = newNode;
}
void LinkedListStack::pop()
{
    if (isEmpty()) // if there aren't any nodes
    {
        std::cout << "The Linked List is empty" << std::endl;
    }
    else if (HEAD == TAIL) // if there is only one node
    {
        LinkedListStack *temp;
        temp = HEAD;
        HEAD = nullptr;
        TAIL = nullptr;
        delete temp;
    }
    else // if there is more than one node
    {
        LinkedListStack *temp;
        temp = HEAD;
        HEAD = HEAD->next;
        delete temp;
    }
}
int LinkedListStack::peek()
{
    if (!isEmpty())
    {
        return (HEAD->data);
    }
    else
        return 0;
}
