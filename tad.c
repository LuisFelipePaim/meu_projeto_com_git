#include "tad.h"
#include <stdlib.h>
#include <string.h>
#define max 10
#define max_nome 30

struct funcionario {
    long int matricula;
    char nome[max_nome];
    char setor;
    double salario;
};

struct pilha {
    struct funcionario func[max];
    int topo;
};
