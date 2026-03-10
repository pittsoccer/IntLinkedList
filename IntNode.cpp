
#include "IntNode.h"
#include <iostream>
using namespace std;

IntNode::IntNode()
{
    data = 0;
    link = nullptr;
}

IntNode::IntNode(int theData, IntNodePtr theLink)
{
    data = theData;
    link = theLink;
}

void IntNode::setData (int theData)
{
    data = theData;
}

void IntNode::setLink (IntNodePtr theLink)
{
    link = theLink;
}

int IntNode::getData() const
{
    return data;
}
