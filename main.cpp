#include "../include/LinkedListStack.h"
#include "../include/ArrayStack.h"

#include <iostream>

int main()
{
    ArrayStack a;
    std::cout << "Check if the stack is empty: " << a.isEmpty() << std::endl;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    std::cout << "Checking if the stack is full after adding 5 data(1,2,3,4,5): " << a.isFull() << std::endl; // should return true value
    std::cout << "Trying to add 6th data after stack is full: " << std::endl;
    a.push(6); // should throw error
    std::cout << "removing data from the stack: " << std::endl;
    a.pop();                                              // should remove 5
    a.pop();                                              // should remove 4
    std::cout << "Using peek: " << a.peek() << std::endl; // should show 3

    std::cout << "\n\nUsing Linked List: " << std::endl;
    LinkedListStack b;
    std::cout << "Checking if the Stack is empty: " << b.isEmpty() << std::endl;
    b.createStack(5); // 5 gets added to the empty stack

    b.push(4); // pushing another data to the stack
    b.push(3);
    std::cout << "After pusing 5,4, and 3 in the stack, " << std::endl;
    std::cout << "Data at the top: " << b.peek() << std::endl;
    b.push(2);
    b.push(1);
    std::cout << "Empty or not: " << b.isEmpty() << std::endl;
    b.pop(); // should remove 1
    b.pop(); // remove 2
    std::cout << "Checking if it is full: " << b.isFull() << std::endl;
    std::cout << "The data at the top is: " << b.peek() << std::endl; // should show 3
    return 0;
}
