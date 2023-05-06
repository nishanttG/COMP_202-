#include "Stack.h"
#define MaxStackSize 5
class ArrayStack : public Stack
{
private:
    int topindex = -1;
    int data[MaxStackSize];

public:
    ArrayStack() {}
    ~ArrayStack() {}

    bool isEmpty();
    bool isFull();
    void push(int);
    void pop();
    int peek();
};
