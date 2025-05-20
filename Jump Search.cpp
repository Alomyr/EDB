// autor:Matheus Vinicius Silva Freire de Castro
// esse codigo foi feito a pedido de uma atividade de reposiçao, onde esta utilizando o metodo de busca jump Search;
#include <iostream>
#include <cmath>
int jumpSearch(int array[], int n, int buscador);
int main()
{

    int array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21}; // vetor dado na questao
    int n = sizeof(array) / sizeof(array[0]);              // numero de elementos
    for (int i = 0; i < n; i++)                            // imprime os valores do array
    {
        std::cout << "Entrada:Lista=[" << array[i];
    }
    std::cout << "]" << std::endl;
    int buscador; // qual o numero q queremos achar
    std::cout << "X= ";
    std::cin >> buscador;

    int achador = jumpSearch(array, n, buscador); // chama e incrementa os valores do vetor
    // saidas do codigo
    if (achador != -1)
        std::cout << "Sainda: Numero encontrado na posiçao: " << achador << std::endl;
    else
        std::cout << "-1" << std::endl;

    return 0;
}

int jumpSearch(int array[], int n, int buscador)
{ // metodo usado para buscar

    int saltos = std::sqrt(n); // o n aqui é usado para definir o tamanho do pulo q sera dado para porcurar
    int ponto = 0;

    while (ponto < n && array[std::min(saltos, n - 1)] < buscador) // vai pulando os numeros ate achar onde esta um intervalo onde o valor pedido possa estar

    {

        ponto = saltos;
        saltos += std::sqrt(n); // avança para o proximo espaço de numeros

        if (ponto >= n)
            return -1; // para caso o salto de intervalos passar do tamanho do array
    }

    while (array[ponto] < buscador) // busca em sequencia dentro do intervalo do salto onde pode esta o numero
    {
        ponto++;
        if (ponto == std::min(saltos, n))
        {
            return -1; // o mesmo do primeiro -1
        }
    }
    if (array[ponto] == buscador) // para caso encontre o elemendo vai retornar o indice dele
    {
        return ponto;
    }
    return -1;
}