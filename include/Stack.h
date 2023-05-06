#ifndef Stack_h
#define Stack_h
class Stack
{
public:
    Stack() {}
    ~Stack() {}
    virtual bool isFull() = 0;
    virtual bool isEmpty() = 0;
    virtual void push(int) = 0;
    virtual void pop() = 0;
    virtual int peek() = 0;
};
#endif