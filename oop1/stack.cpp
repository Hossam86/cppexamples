#include "stack.h"

stack::stack()
{
sp=0;
}
void stack::push(int value)
{
    stackstore[sp++]=value;
}
int stack::pop()
{
   return stackstore[--sp];
}
