#include "./include/ArrayQueue.h"
#include "./include/LinkedListQueue.h"
#include <iostream>
int main()
{
    ArrayQueue a;
    a.createQueue();
    a.enqueue(5);
    a.enqueue(6);
    a.enqueue(7);
    a.enqueue(8);
    a.dequeue();
    a.dequeue();
    std::cout << "Creating a queue using an array: " << std::endl;
    std::cout << "Values 5,6,7,8 are added in the queue." << std::endl;
    std::cout << "Dequeue is performed twice." << std::endl;

    std::cout << "The value at the rear of the queue is: " << a.front() << std::endl;       // should return 8
    std::cout << "The value at the front(back) of the queue is: " << a.back() << std::endl; // should return 7

    std::cout << "Creating a queue using Linked List(Linear queue)" << std::endl;
    std::cout << "Adding 1,2,3,4 to the linked list queue" << std::endl;
    LinkedListQueue b;
    b.createQueue();
    b.enqueue(2);
    b.enqueue(3);
    b.enqueue(4);
    std::cout << "Dequeuing twice" << std::endl;
    std::cout << "Value at rear is: " << b.front() << std::endl;
    std::cout << "Value at front is: " << b.back() << std::endl;

    return 0;
}