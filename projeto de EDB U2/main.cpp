#include "Tarefa.hpp"
#include <iostream>

int main(){

    Tarefas tarefas;

    tarefa des;
    
    entrada:
    std::cin>>des.id;
    std::cin>>des.descricao;
    std::cin>>des.prioridade;
    tarefas.adicionarTarefa(des.id, des.prioridade, des.descricao);
    tarefas.adicionarTarefa(2, 2, "const char *descricao");
    tarefas.listarTarefas();

    std::cout<<"============================================\n\n\n";
    tarefas.removerTarefa(1);
    tarefas.listarTarefas();

    return 0;
}