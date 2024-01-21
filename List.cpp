#include "list.hpp"


void List::add_node(int new_val)
{
    if(m_head == nullptr){
        Node* new_node = new Node(new_val);
        m_head = new_node;
    }else{
        Node* new_node = new Node(new_val);
        new_node->set_next(m_head);
        m_head = new_node;
    }
}

void List::remove_node(int del_val) {
    if (m_head == nullptr) {
        std::cout << "Your list is empty." << std::endl;
        return;
    }

    Node* current = m_head;
    Node* prev = nullptr;

    while (current != nullptr) {
        if (del_val == current->get_val()) {
            if (current == m_head) {
                m_head = current->get_next();
            } else {
                prev->set_next(current->get_next());
            }

            delete current;
            return;
        }

        prev = current;
        current = current->get_next();
    }

    std::cout << "Node with that value was not found." << std::endl;
}


void List::insert_after(int position, int value) {
    if (m_head == nullptr) {
        std::cout << "Your list is empty." << std::endl;
        return;
    }

    Node* current = m_head;

    while (position > 1 && current != nullptr) {
        --position;
        current = current->get_next();
    }

    if (position > 1 || current == nullptr) {
        std::cout << "Position out of range." << std::endl;
        return;
    }
    
    Node* new_node = new Node(value);

    new_node->set_next(current->get_next());
    current->set_next(new_node);
}

void List::print_list(){
    if(m_head == nullptr){
        std::cout << "Your list is empty: " << std::endl;
        return;
    }
    Node* current = m_head;
    while(current != nullptr){
        std::cout << current->get_val() << " -> ";
        current = current->get_next();
    }
    std::cout << std::endl;
}

