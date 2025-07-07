#ifndef LINKED_TREE
#define LINKED_TREE
#include <cstdio>

#include "tree.hxx"

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