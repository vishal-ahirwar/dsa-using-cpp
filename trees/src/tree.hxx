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

namespace Array
{

template <typename T>
class BinaryTree : public BaseTree<T>
{
   public:
    void preOrder() override {}
    void postOrder() override { std::printf("[array] %s\n", __func__); }
    void levelOrder() override {}
    void inOrder() override {}
};
}  // namespace Array


namespace Linked
{

template <typename T>
class BinaryTree : public BaseTree<T>
{
   public:
    void preOrder() override {}
    void postOrder() override { std::printf("[linked] %s\n", __func__); }
    void levelOrder() override {}
    void inOrder() override {}
};
}  // namespace Linked


#endif