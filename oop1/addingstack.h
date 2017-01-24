#ifndef ADDINGSTACK_H
#define ADDINGSTACK_H

#include<stack.h>
class AddingStack : public stack
{
public:
    AddingStack();
    void push(int value);
    int  pop();
    int  getSum();
private:
int sum;
};

#endif // ADDINGSTACK_H
