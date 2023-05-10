#include <iostream>
#include "./include/LinkedList.h"
int main()
{
    LinkedList a; // initializes HEAD and TAIL to null
    std::cout << "Checking if the linked list is empty(just after creating an object):";
    std::cout << a.isEmpty() << std::endl; // should return true
    a.createNode(5);                       // creates a node
    std::cout << "\nIf the linked list is empty after adding one eleemnt: ";
    std::cout << a.isEmpty() << std::endl; // should return false

    a.addToHead(4); // adding another element before the node previously created
    a.addToTail(6); // adding element to the tail of the linked list
    a.traverse();
    std::cout << std::endl;
    std::cout << "\nSearching for 6 :  ";
    std::cout << a.search(6) << std::endl;
    a.remove(5);
    std::cout << "After removing 5: " << std::endl;
    a.traverse();
    // adding 1 to the head
    std::cout << "\nAdding 1 to the head" << std::endl;
    a.addToHead(1);
    a.traverse();
    // removing 1 from the head
    a.removeFromHead();
    std::cout << "\nAfter removing 1 from the head: " << std::endl;
    a.traverse();
    // adding 2 to the tail
    a.addToTail(2);
    std::cout << "\nAfter adding 2 to the tail: " << std::endl;
    a.traverse();
    // Removing from the tail
    a.removeFromTail();
    std::cout << "\nAfter removing 2 from the tail: " << std::endl;
    a.traverse();
    std::cout << std::endl;
    // a.addToHead(7);
    // a.traverse();
    // std::cout << std::endl;
    // // Suppose to add data between 4 and 6 in 7, 4, 6
    // Node *p = new Node();

    // retrieve is not working

    // p = &(a.retrieve(4));
    // a.add(5, p);
    // a.traverse();
    return 0;
}