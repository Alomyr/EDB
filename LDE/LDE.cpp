#include "LDE.hpp"


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

}