#include <iostream>
#include<class.h>
using namespace std;
int Class::counter=0;
int main()
{
Class a;
Class b;
cout<<Class::counter<<"intance so far"<<endl;
Class c;
Class d;
d.HowMany();
        return 0;
}
