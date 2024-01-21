#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include "Node.hpp"

class List : public Node{
public:
    List() : m_head(nullptr) {}
    ~List() = default;

private:   
    Node* m_head;

public:
    void add_node(int);
    void remove_node(int);
    void insert_after(int, int);
    void print_list();
};

#endif // LIST_HPP