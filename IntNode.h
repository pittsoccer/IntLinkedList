
class IntNode;
typedef IntNode* IntNodePtr;

class IntNode
{
    private:
        int data;
        IntNodePtr link;
    public:
        IntNode();
        IntNode(int theData, IntNodePtr theLink);
        void setData (int theData);
        void setLink (IntNodePtr theLink);
        int getData() const;
};
