
#include "Lencadeada.hpp"
#include <iostream>

int main(){
    Node* L = build123();


    std::cout << "Lista: ";
    print_list(L);
    pop_front(L);
    print_list(L);
    pop_back(L);
    print_list(L);
    pop_at(L, 1);
    std::cout << "Tamanho: " << length(L) << std::endl;



    return 0;
}
