#include<iostream>
#include "class.h"

using namespace std;
Class::Class(int val)
{
value=new int[val];
cout<<"Allocation("<<val<<")done."<<endl;
}

Class::~Class()
{
  delete[] value;
  cout<<"Delection done."<<endl;
}
