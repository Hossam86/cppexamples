#include<iostream>
#include "class.h"

using namespace std;
Class::Class()
{
++counter;
}

Class::~Class()
{
    --counter;
    if(counter==0)cout<<"bye,bye!"<<endl;
}
