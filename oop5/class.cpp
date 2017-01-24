#include<iostream>
#include "class.h"
using namespace std;
int Class::Static = 0;
Class::Class()
{
}

void Class::print()
 {
  cout<<"Static="<<++Static <<
        ", NonStatic = " << NonStatic << endl;
 }



