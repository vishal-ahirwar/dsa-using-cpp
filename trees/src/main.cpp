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
    std::shared_ptr<BaseTree<std::string>>tree{std::make_shared<Linked::BinaryTree<std::string>>()};
    tree->postOrder();
    tree=std::make_shared<Array::BinaryTree<std::string>>();
    tree->postOrder();
    return 0;
}
