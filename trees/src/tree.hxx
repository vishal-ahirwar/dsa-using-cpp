#ifndef BASE_TREE
#define BASE_TREE
template <typename T>
class BaseTree
{
   public:
    virtual void preOrder()   = 0;
    virtual void postOrder()  = 0;
    virtual void levelOrder() = 0;
    virtual void inOrder()    = 0;
};
#endif