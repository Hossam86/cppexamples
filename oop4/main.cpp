#include <iostream>

using namespace std;

int main()
{
    void fun();
   for(int i=0;i<5;i++)
       fun();
    return 0;
}
 void fun()
 {

       static int var=99;
       int var2 = 99;
       cout<<"var="<<++var<<++var2<<endl;
 }
