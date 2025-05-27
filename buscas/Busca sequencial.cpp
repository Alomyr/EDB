
// autor:Matheus Vinicius Silva Freire de Castro, esse codigo foi feito a pedido de uma atividade de reposiçao, onde esta utilizando o metodo de busca sequencial;
#include <iostream>
// void preencherVetor(int vetor[], int n);
void buscaS(int vetor[], int n, int val);
int main()
{
    // antes tinha pensando nesse codigo de maneira com que fosse possivel definir o tamanho e os elementos do vetor mas depois mudei para se encaixar melhor com a atividade
    int n, val;
    // std::cin >> n;
    int vetor[5] = {10, 25, 33, 42, 50}; // trocar 5 por n
    // std::cout << "Entrada: Lista=[";
    //   preencherVetor(vetor, 5);
    std::cout << "X=";
    std::cin >> val;       // sera usada para definir o numero que queremos achar na lista
    buscaS(vetor, 5, val); // para colocar os valores dentros do metodo de busca
    return 0;
}
/*void preencherVetor(int vetor[], int n) // era usada quando era possivel entrara com os valores dentro do array
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> vetor[i]; //incremeta os valores no array
    }
    system("clear");
    std::cout << "Entrada: Lista=[";
    for (int i = 0; i < n; i++)
    {
        std::cout << vetor[i] << " ";
    }
    std::cout << "]";

    std::cout << std::endl;
}*/
void buscaS(int vetor[], int n, int val)
{
    // metodo de busca
    bool encontrado = false; // linha para retorno ja que ainda n achamos vamos mantes ela em falso

    for (int i = 0; i < n; i++)
    { // percorre o vetor para sequncialmente para verificar se acha esse elemento
        if (vetor[i] == val)
        {
            std::cout << "Saida: Número encontrado na posição " << i << std::endl;
            encontrado = true; // muda o statos para dizer que achou
            break;
        }
    }
    if (!encontrado) // caso n seja achado ele ira se manter como false e passar -1
    {
        std::cout << "-1" << std::endl;
    }
}
