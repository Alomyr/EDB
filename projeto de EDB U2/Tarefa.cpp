#include "Tarefa.hpp"
#include <complex>
#include <cstring>
#include <iostream>

Tarefas::Tarefas() {
    // Constructor implementation
    tarefa* head = nullptr;
}

void Tarefas::adicionarTarefa(int id, int prioridade, const char* descricao){

    tarefa* novatarefa = new tarefa;
   novatarefa->id = id;
   novatarefa->prioridade = prioridade;
   novatarefa->next = nullptr;
    std::strncpy(novatarefa->descricao, descricao, 100);

    if(head == nullptr){
        head = novatarefa;
    }else{
        tarefa* atual= head;
        while(not(atual->next == nullptr)){
            atual = atual->next;
        }
        atual->next = novatarefa;
    }
}

void Tarefas::listarTarefas()const{


    tarefa* atual = head;
    while(not(atual == nullptr)){
        std::cout<<"ID: "<<atual->id<<'\n';
        std::cout<<"Prioridade: "<<atual->prioridade<<'\n';
        std::cout<<"Descição: "<<atual->descricao<<'\n';
        atual = atual->next;
    }

}
Tarefas::~Tarefas(){
    
    tarefa* atual = head;
    while(not(atual == nullptr)){
        tarefa* delet = atual;
        atual = atual->next;
        delete delet;
    }

}