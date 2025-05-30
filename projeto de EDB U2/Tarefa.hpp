#ifndef TAREFAS_HPP
#define TAREFAS_HPP

struct tarefa{

    int id;
    int prioridade;
    char descricao[100];
};
class Tarefas {

    public:
        Tarefas();
        ~Tarefas();

        void adicionarTarefa(int id, int prioridade, const char* descricao);
        void removerTarefa(int id);
        void listarTarefas() const;
        void buscarTarefa(int id) const;

};

#endif // TAREFAS_HPP