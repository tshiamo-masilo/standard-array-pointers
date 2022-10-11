#include <iostream>
#include "Array1.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Array1<int> obj1(10);
   // Array1 obj2('e');
    obj1.add(15);
    cout<<"Hello"<<endl;
    obj1.add(20);
    obj1.add(25);
    obj1.add(26);
    obj1.add(27);
    obj1.add(28);
    cout<<"Hello"<<endl;
    obj1.printArray();
    cout<<obj1[11];
    //Array1 *obj2 = new Array1(10,3);
    cout<<"Hello World";

    return 0;

}
