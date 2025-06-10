#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>
#include "ListaEncadea.hpp"


Node* build123();
std::size_t length(Node* head);
void print_list(const Node* L);
Node* get_last(Node* L);
void push_back(Node*& L, int value);
void push_front(Node*& L, int value);



int main() {
    Node* L = nullptr;
    push_back(L, 1);
    push_back(L, 2);
    push_back(L, 3);

    Node* last = get_last(L);
    if (last != nullptr) {
        std::cout << "Último elemento: " << last->data << '\n';
    } else {
        std::cout << "Lista vazia\n";
    }

    return 0;
}

Node* build123() {
    Node* n1 = new Node{1, nullptr};
    Node* n2 = new Node{2, nullptr};
    Node* n3 = new Node{3, nullptr};
    n1->next = n2;
    n2->next = n3;
    return n1;
}

void print_list(const Node* L) {
            std::cout << " * => ";
    while (L != nullptr) {
        std::cout << L->data << " => ";
        L = L->next;
    }
    std::cout << "NULL" << '\n';
}

std::size_t length(Node* head) {
    std::size_t count = 0;
    while (head != nullptr) {
        ++count;
        head = head->next;
    }
    return count;
}
void push_front(Node*& L, int value) {
    Node* new_node = new Node{value, L};
    L = new_node;
}
Node* get_last(Node* L) {
    if (L == nullptr) {
        return nullptr; // Lista vazia
    }

    while (L->next != nullptr) {
        L = L->next;
    }
    return L; // Último nó
}

void push_back(Node*& L, int value) {
    Node* new_node = new Node{value, nullptr};

    if (L == nullptr) {
        // Lista está vazia, o novo nó é o primeiro
        L = new_node;
        return;
    }

    Node* temp = L;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new_node;
}