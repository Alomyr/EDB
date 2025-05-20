#include "Lencadeada.hpp"
#include <cstddef>
#include <iostream>

Node* build123(){

    Node *n1= new Node;
    n1->data=1;
   
    Node *n2= new Node;
    n2->data=2;
    
    Node *n3= new Node;
    n3->data=3;
    
    n1->next = n2;
    n2->next = n3;
    n3->next=nullptr;
    return n1;
}

size_t length(Node* H) {
    size_t count{0};
    while (H != nullptr) {
        count++;
        H = H->next;
    }
    return count;
}

Node* push_front( Node* &H, int v){
    Node *nn= new Node;
    nn->data=v;
    nn->next=H;
    H=nn;
    return H;
}

Node *get_last(Node *L){
    Node *prev{nullptr};
    while (L != nullptr) {
        prev=L;
        L=L->next;
    }
    return prev;
}

Node* push_back(Node* &H, int v){

    Node *nn= new Node;
    nn->data=v;
    nn->next=nullptr;
    Node *p=get_last(H);
    if(p==nullptr){
                H=nn;
    }else{
        p->next=nn;
    }
    return H;
}
void print_list(Node* H) {
    while (H != nullptr) {
        std::cout << H->data;
        if (H->next != nullptr) {
            std::cout << " -> ";
        }
        H = H->next;
    }
    std::cout << std::endl;
}