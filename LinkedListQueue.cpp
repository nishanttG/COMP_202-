#include "../include/LinkedListQueue.h"
#include <iostream>
void LinkedListQueue::createQueue()
{
    std::cout << "Enter the first data to be added to the queue: ";
    std::cin >> data;
    LinkedListQueue *newNode = new LinkedListQueue(data);
    HEAD = TAIL = newNode;
}
void LinkedListQueue::enqueue(int a)
{
    LinkedListQueue *newNode = new LinkedListQueue(a, nullptr);
    TAIL->next = newNode;
    TAIL = newNode;
}
void LinkedListQueue::dequeue()
{
    if (isEmpty()) // if there aren't any nodes
    {
        std::cout << "The Linked List is empty" << std::endl;
    }
    else if (HEAD == TAIL) // if there is only one node
    {
        LinkedListQueue *temp;
        temp = HEAD;
        HEAD = nullptr;
        TAIL = nullptr;
        delete temp;
    }
    else // if there is more than one LinkedListQueue
    {
        LinkedListQueue *temp;
        temp = HEAD;
        HEAD = HEAD->next;
        delete temp;
    }
}
bool LinkedListQueue::isEmpty()
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
bool LinkedListQueue::isFull()
{
    std::cout << "The linked list is never full";
    return false;
}
int LinkedListQueue::front()
{
    return (TAIL->data);
}
int LinkedListQueue::back()
{
    return (HEAD->data);
}
