#include "Tarefa.hpp"
#include <iostream>

int main(){

    Tarefas tarefas;
    tarefa task;
    
    entrada:
    std::cin>>task.id;
    std::cin>>task.description;
    std::cin>>task.priority;
    tarefas.adicionarTarefa(task.id, task.priority, task.description);
    tarefas.adicionarTarefa(2, 2, "const char *descricao");
    tarefas.listarTarefas();

    std::cout<<"============================================\n\n\n";
    tarefas.removerTarefa(1);
    tarefas.listarTarefas();




    return 0;
}