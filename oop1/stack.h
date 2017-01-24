#ifndef STACK_H
#define STACK_H


class stack
{
public:
    stack();
    void push(int value);
    int pop();

private:
    int stackstore[100];
    int sp;

};

#endif // STACK_H
