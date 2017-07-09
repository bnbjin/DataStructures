#pragma once 

template <typename T>
struct binary_tree_node
{ 
    
    T   key;
    
    binary_tree_node    *left;
    
    binary_tree_node    *right;
    
    binar_tree_node()
        : key(), left(0), right(0)
    {}

    binary_tree_node(T _key)
        : key(_key), left(0), right(0)
    {}

    typedef void (*traverse_proc)();

    void display();
};

template <typename T>
class binary_tree
{
public:

    binary_tree();

    ~binary_tree();

    bool insert(T _key);

    bool erase(T _key);

private:

    template <binary_tree_node<T>::traverse_proc tp>
    void pre_order();
    
    template <binary_tree_node<T>::traverse_proc tp>
    void in_order();
    
    template <binary_tree_node<T>::traverse_proc tp>
    void post_order();

    binary_tree_node<T> *m_root;

};

#include "tree.cpp"
