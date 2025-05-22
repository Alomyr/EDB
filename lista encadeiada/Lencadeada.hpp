#include <cstddef>
#ifndef LISTA_HPP
#define LISTA_HPP

struct Node{

    int data;
    Node *next;

};

#endif

Node* build123();
size_t length(Node* H);
Node* push_front(Node* &H, int v);
Node* push_back(Node* &H, int v);
Node* get_last(Node* L);
void print_list(Node* H);
void pop_front(Node* &H);
void pop_back(Node* &H);
Node* get_prev_last(Node* L);
void pop_at(Node* &H, int idx);