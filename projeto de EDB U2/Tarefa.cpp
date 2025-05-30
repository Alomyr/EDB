#include "Tarefa.hpp"
#include <cstring>
#include <iostream>

Tarefas::Tarefas() {
    // Constructor implementation
    head = nullptr;
}

void Tarefas::adicionarTarefa(int id, int priority, const char* descricao){

    tarefa* newTask = new tarefa;
   newTask->id = id;
   newTask->priority = priority;
   newTask->next = nullptr;

   
    std::strncpy(newTask->description, descricao, sizeof(newTask->description)-1);
    newTask->description[sizeof(newTask->description) - 1] = '\0';

    if(head == nullptr){
        head = newTask;
    }else{
        tarefa* current= head;
        while(not(current->next == nullptr)){
            current = current->next;
        }
        current->next = newTask;
    }
}

void Tarefas::listarTarefas()const{


    tarefa* current = head;
    while(not(current == nullptr)){
        std::cout<<"ID: "<<current->id<<'\n';
        std::cout<<"Prioridade: "<<current->priority<<'\n';
        std::cout<<"Descição: "<<current->description<<'\n';
        current = current->next;
    }

}

void Tarefas::removerTarefa(int ID){

    tarefa* current = head;
    tarefa* prev = nullptr;

    while(not(current == nullptr) and not(current->id == ID)){
        prev = current;
        current = current->next;
    }
    if(current == nullptr) return;

    prev == nullptr ? head = current->next : prev->next = current->next;

    delete current;
}

Tarefas::~Tarefas(){
    
    tarefa* current = head;
    while(not(current == nullptr)){
        tarefa* delet = current;
        current = current->next;
        delete delet;
    }

}