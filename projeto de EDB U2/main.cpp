#include "Tarefa.hpp"
#include <iostream>

int main(){

    Tarefas tarefas;

    tarefas.adicionarTarefa(1, 1, "test");
    tarefas.listarTarefas();

    return 0;
}