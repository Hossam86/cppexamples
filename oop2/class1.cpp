#include "class1.h"

Class1::Class1(int value)
{
this->value=value;
}
Class1::Class1(const Class1 &source)
{
   value=source.value+100;
}
