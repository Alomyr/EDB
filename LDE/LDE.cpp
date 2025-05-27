#include "LDE.hpp"
#include <iostream>

Node* build123(){

    Node* h = new Node();
    h->next = nullptr;
    h->prev = nullptr;

    Node* n1= new Node();
    h->next=n1;
    n1->prev=h;
    n1->data =2;

    Node* n2= new Node();
    n1->next=n2;
    n2->prev=n1;
    n2->data =6;

    Node* n3= new Node();
    n2->next=n3;
    n3->prev=n2;
    n3->data =4;
    n3->next = nullptr;

    return h;
}

void print_list(Node * L){
    while (not(L== nullptr)) {
        if(L->prev == nullptr)
            std::cout <<"-|> h";
        else std::cout <<"<=>"<< L->data;
        
        L = L->next;
        
    }
    std::cout<<"-|> Null.\n";

}