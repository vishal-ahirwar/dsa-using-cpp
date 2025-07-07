#ifndef ARRAY_TREE
#define ARRAY_TREE
#include <cstdio>

#include "tree.hxx"
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
#endif