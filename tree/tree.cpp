#include <iostream>

template <typename T>
void binary_tree_node::display()
{
    std::cout << key << std::endl;
}

template <typename T>
binary_tree::binary_tree()
    : m_root()
{}

template <typename T>
binary_tree::~binary_tree()
{
    
}
