
#ifndef LnDE_HPP
#define LDE_HPP


struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* build123();
void print_list(Node* L);

#endif