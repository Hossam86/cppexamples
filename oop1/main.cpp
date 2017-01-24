/*
 * create stack from scratch
 * */
#include<iostream>
#include<stack.h>
#include<addingstack.h>
using namespace std;
int main()
{
    stack little_stack,other_stack,funny_stack;
    little_stack.push(1);
    other_stack.push(little_stack.pop()+1);
    funny_stack.push(other_stack.pop()+2);
    cout<<funny_stack.pop()<<endl;

   AddingStack super_stack;

   for(int i=1; i<10;i++)
   {
       super_stack.push(i);
   }
   cout<<super_stack.getSum()<<endl;
   for(int i=1;i<10;i++)
   {
      super_stack.pop();
   }
cout<<super_stack.getSum()<<endl;
return 0;
}
