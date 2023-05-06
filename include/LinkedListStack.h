#include "Stack.h"

class LinkedListStack : public Stack
{
private:
    LinkedListStack *HEAD, *TAIL;
    int data;
    LinkedListStack *next;

public:
    LinkedListStack() : HEAD(nullptr), TAIL(nullptr) {}                    // default constructor
    LinkedListStack(int a) : data(a), next(nullptr) {}                     // parameterized if only one parameter i.e., data is sent
    LinkedListStack(int a, LinkedListStack *next) : data(a), next(next) {} // if both data and pointer are passed

    ~LinkedListStack() {}

    void createStack(int);
    bool isFull();
    bool isEmpty();
    void push(int);
    void pop();
    int peek();
};