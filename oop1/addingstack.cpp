#include "addingstack.h"

AddingStack::AddingStack():stack()
{
    sum=0;
}

void AddingStack::push(int value)
{
   sum+=value;
   stack::push(value);
}
int AddingStack::pop()
{
  int val= stack::pop();
  sum-=val;
  return val;
}

int AddingStack::getSum()
{
    return sum;
}
