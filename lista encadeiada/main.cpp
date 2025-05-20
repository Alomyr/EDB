
#include "Lencadeada.hpp"
#include <iostream>

int main(){
    Node* L = build123();


    std::cout << "Lista: ";
    print_list(L);

    std::cout << "Tamanho: " << length(L) << std::endl;



    return 0;
}
