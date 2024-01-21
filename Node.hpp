#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>

class Node
{
public:
    Node(int);
    Node() = default;
    ~Node() = default;

private:
    Node* m_next;
    int m_val;

public:
    int get_val();
    void set_val(int);
    void set_next(Node*);
    Node* get_next();
};

#endif // NODE_HPP