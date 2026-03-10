
#include "IntNode.h"
#include <iostream>
using namespace std;

int main()
{
    IntNodePtr head;
    head = new IntNode();

//    (*head).setData(25);
//    int num = (*head).getData();

    head->setData(25);
    int num = head->getData();

    cout << "Data is: " << num << endl;

return 0;
}
