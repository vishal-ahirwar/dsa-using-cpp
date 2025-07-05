// Auto Genrated C++ file by Flick CLI
// None
#include <dsa-using-cppconfig.h>

#include <cstdio>
#include <memory>
#include <string>

#include "array_traversal.hxx"
#include "linked_traversal.hxx"
#include "tree.hxx"

int main(int argc, char* argv[])
{
    std::unique_ptr<BaseTree<std::string>>tree{std::make_unique<Linked::BinaryTree<std::string>>()};
    tree->postOrder();
    tree=std::make_unique<Array::BinaryTree<std::string>>();
    tree->postOrder();
    return 0;
}
