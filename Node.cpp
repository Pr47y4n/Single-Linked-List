#include "Node.hpp"

Node::Node(int new_val) : m_val(new_val), m_next(nullptr){}

int Node::get_val(){
    return m_val;
}

void Node::set_val(int new_val){
    m_val = new_val;
}

void Node::set_next(Node* new_next){
    m_next = new_next;
}

Node* Node::get_next(){
    return m_next;
}