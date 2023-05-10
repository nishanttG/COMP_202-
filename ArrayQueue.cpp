#include "../include/ArrayQueue.h"
#include <iostream>
// Implementing circular queue

void ArrayQueue::createQueue()
{

    front_index = -1;
    rear_index = -1;
    std::cout << "Enter the size of the queue: ";
    std::cin >> maxQueueSize;
    Q = new int[maxQueueSize];
}
void ArrayQueue::enqueue(int data)
{

    if (!isFull())
    {
        rear_index = (rear_index + 1) % maxQueueSize;
        Q[rear_index] = data;
    }
    else
    {
        std::cout << "The queue is Full" << std::endl;
    }
}
void ArrayQueue::dequeue()
{
    if (!isEmpty())
    {
        if (front_index == rear_index)
        {
            front_index = -1;
            rear_index = -1;
        }
        if (front_index == -1)
        {

            front_index = 1;
        }
        else
        {
            front_index = (front_index + 1) % maxQueueSize;
        }
    }
}
bool ArrayQueue::isEmpty()
{
    if (front_index == 0 && rear_index == -1)
    {
        return true;
    }
    else
        return false;
}
bool ArrayQueue::isFull()
{
    if (front_index == (rear_index + 1) % maxQueueSize)
    {
        return true;
    }
    else
        return false;
}
int ArrayQueue::front()
{
    if (!isEmpty())
    {
        return Q[rear_index];
    }
    else
        return 0;
}
int ArrayQueue::back()
{
    if (!isEmpty())
    {
        return Q[front_index];
    }
    else
        return 0;
}
