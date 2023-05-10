
#include "./LinkedList.h"
#include <iostream>

void LinkedList::createNode(int data)
{
    Node *newNode = new Node(data);
    HEAD = TAIL = newNode;
}
bool LinkedList::isEmpty()
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
void LinkedList::addToHead(int data)
{
    Node *newNode = new Node(data, HEAD);
    HEAD = newNode;
}
void LinkedList::addToTail(int data)
{
    Node *newNode = new Node(data, nullptr);
    TAIL->next = newNode;
    TAIL = newNode;
}
void LinkedList::add(int data, Node *pred)
{
    Node *newNode = new Node(data);
    newNode->data = data;
    newNode->next = pred->next;
    pred->next = newNode;
}
void LinkedList::removeFromHead()
{
    if (isEmpty()) // if there aren't any nodes
    {
        std::cout << "The Linked List is empty" << std::endl;
    }
    else if (HEAD == TAIL) // if there is only one node
    {
        Node *temp;
        temp = HEAD;
        HEAD = nullptr;
        TAIL = nullptr;
        delete temp;
    }
    else // if there is more than one node
    {
        Node *temp;
        temp = HEAD;
        HEAD = HEAD->next;
        delete temp;
    }
}
void LinkedList::removeFromTail()
{
    if (isEmpty()) // if there aren't any nodes
    {
        std::cout << "The Linked List is empty" << std::endl;
    }
    else if (HEAD == TAIL) // if there is only one node
    {
        Node *temp;
        temp = TAIL;
        HEAD = nullptr;
        TAIL = nullptr;
        delete temp;
    }
    else // if there is more than one node
    {
        Node *p, *q; // since we have no idea about the node that precedes the tail,
        p = HEAD;
        while (!(p->next == TAIL)) // searching for the node just before the TAIL
        {
            p = p->next;
        }
        q = TAIL;
        TAIL = p;
        TAIL->next = nullptr;
        delete q;
    }
}
void LinkedList::remove(int data)
{
    Node *p, *q;
    q = HEAD;
    if (!isEmpty())
    {
        while (!(q->data == data))
        {
            p = q;
            q = p->next; // q has to be one step ahead of p
        }
        p->next = q->next;
        delete q;
    }
}
// It is not working
Node LinkedList::retrieve(int data)
{
    if (!isEmpty())
    {
        Node *q;
        q = HEAD;
        while (q->data != data || q->next == nullptr)
        {

            q = q->next;
        }
        return *q;
    }
    else
        return 1;
}
bool LinkedList::search(int data)
{
    Node *p;
    p = HEAD;
    if (!isEmpty())
    {
        while (!(p->data == data))
        {
            if (p->next == nullptr)
            {
                return false;
                break;
            }
            else
            {
                p = p->next;
            }
        }
        return true;
    }
    else
        return false;
}
void LinkedList::traverse()
{
    if (!isEmpty())
    {
        Node *p;
        p = HEAD;
        std::cout << "The list of elements in the linked list are: ";

        while (p != nullptr)
        {
            std::cout << p->data << "  ";
            p = p->next;
        }
    }
}
