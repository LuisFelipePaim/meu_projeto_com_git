#ifndef TAD_H
#define TAD_H

typedef struct pilha * Pilha;

Pilha cria_pilha();

int pilha_vazia(Pilha p);

int pilha_cheia(Pilha p);

int push(Pilha p, long int matricula, char nome[31], char setor, float salario);

int pop(Pilha p, long int* matricula, char* nome, char* setor, double* salario);

int get_topo(Pilha p, long int* matricula, char* nome, char* setor, double* salario);

int apaga_pilha(Pilha p);

int esvazia_pilha(Pilha p);

int tamanho_pilha(Pilha p);

#endif