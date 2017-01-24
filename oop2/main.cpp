#include <iostream>
#include<class1.h>
#include<class2.h>
using namespace std;
int main(void) {
    Class1 object11(100), object12 = object11;
    Class2 object21(200), object22 = object21;
    cout << object12.value << endl;
    cout << object22.value << endl;
    return 0;
}
