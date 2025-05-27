// autor:Matheus Vinicius Silva Freire de Castro, esse codigo foi feito a pedido de uma atividade de reposiçao, onde esta utilizando o metodo de busca binaria;
#include <iostream>
int Busca_binaria(int array[], int direita, int esquerda, int buscado);
int main()
{
    // antes tinha pensando nesse codigo de maneira com que fosse possivel definir o tamanho e os elementos do vetor mas depois mudei para se encaixar melhor com a atividade
    /*
        int n;
        std::cin >> n;
        int array[n];*/
    // esolhcer o tamanho do vetor
    int array[7] = {5, 12, 19, 26, 33, 42, 58}; // array dado na questao
    std::cout << "Entrada: Lista=[";
    // for (int i = 0; i < n; i++) // for do tamanhao variado

    /*for (int i = 0; i < 5; i++)
    {

        std::cin >> array[i];
    }
    system("clear");
    std::cout << "Entrada: Lista=[";*/
    for (int i = 0; i < 7; i++) // trocar 5 para ser pussivel usar de maneira dinamica
    {
        std::cout << array[i] << " ";
    }
    std::cout << "]";

    int buscado;
    std::cout << ", X=";
    std::cin >> buscado; // para definir o que sera buscado

    //  int achador = lista(array, n - 1, 0, buscado); //para passar o tamanho da direita do jeito q o caba quiser
    int achador = Busca_binaria(array, 7 - 1, 0, buscado); // coloca os valores dentro da funçao de busca
                                                           // saidas do programa
    if (achador != -1)
    {
        std::cout << "Saida: Número encontrado na posição " << achador << std::endl;
    }
    else
    {
        std::cout << "" << achador << std::endl;
    }
}

int Busca_binaria(int array[], int direita, int esquerda, int buscado)
{
    while (esquerda <= direita) // definindo o espaço da busca
    {
        int mid = (direita + esquerda) / 2; // para achar o meio do vetor e começar por ele
        if (array[mid] == buscado)          // casso ja seja o numero q vc escolheu esteja no meio
        {
            return mid;
        }
        else if (array[mid] < buscado) // para andar para frente
        {
            esquerda = mid + 1;
        }
        else
        {
            direita = mid - 1; // para andar para tras
        }
    }

    return -1;
}
