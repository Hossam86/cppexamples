
#include<iostream>
#include"class.h"
using namespace std;
//int Class::Static = 0;
int main()
{

Class inst1,inst2;
inst1.NonStatic=10;
inst2.NonStatic=20;

inst1.print();
inst2.print();
return 0;

}


