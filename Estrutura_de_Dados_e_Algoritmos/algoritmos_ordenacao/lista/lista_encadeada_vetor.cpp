#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 1000

// Definindo o tipo Pessoa
typedef struct
{
    char nome[100];
    int idade;
} Pessoa;

// Definindo o tipo ListaPessoas
typedef struct
{
    Pessoa dados[MAX];
    int n; // quantidade atual de elementos
} ListaPessoas;

// Cria uma nova lista
void criarLista(ListaPessoas *lista)
{
    lista->n = 0;
}

// Verifica se a lista está vazia
bool estaVazia(ListaPessoas *lista)
{
    return lista->n == 0;
}

// Retorna o tamanho da lista
int tamanho(ListaPessoas *lista)
{
    return lista->n;
}

// Insere uma pessoa em uma posição específica
bool inserir(ListaPessoas *lista, int pos, Pessoa p)
{
    if (lista->n == MAX || pos < 0 || pos > lista->n)
    {
        return false;
    }

    for (int i = lista->n; i > pos; i--)
    {
        lista->dados[i] = lista->dados[i - 1];
    }

    lista->dados[pos] = p;
    lista->n++;
    return true;
}

// Insere uma pessoa no fim da lista
bool inserirNoFim(ListaPessoas *lista, Pessoa p)
{
    return inserir(lista, lista->n, p);
}

// Remove uma pessoa da lista na posição especificada
bool remover(ListaPessoas *lista, int pos)
{
    if (estaVazia(lista) || pos < 0 || pos >= lista->n)
    {
        return false;
    }

    for (int i = pos; i < lista->n - 1; i++)
    {
        lista->dados[i] = lista->dados[i + 1];
    }

    lista->n--;
    return true;
}

// Busca uma pessoa na posição especificada
Pessoa *buscarPorPosicao(ListaPessoas *lista, int pos)
{
    if (pos < 0 || pos >= lista->n)
    {
        return NULL;
    }

    return &lista->dados[pos];
}

// Busca a posição de uma pessoa com nome e idade iguais
int buscarPessoa(ListaPessoas *lista, Pessoa p)
{
    for (int i = 0; i < lista->n; i++)
    {
        if (strcmp(lista->dados[i].nome, p.nome) == 0 && lista->dados[i].idade == p.idade)
        {
            return i;
        }
    }
    return -1;
}

// Imprime os dados da lista (para fins de teste)
void imprimirLista(ListaPessoas *lista)
{
    printf("Lista de Pessoas (%d elementos):\n", lista->n);
    for (int i = 0; i < lista->n; i++)
    {
        printf("  [%d] Nome: %s, Idade: %d\n", i, lista->dados[i].nome, lista->dados[i].idade);
    }
}

int main()
{
    ListaPessoas lista;
    criarLista(&lista);

    Pessoa p1 = {"Alice", 30};
    Pessoa p2 = {"Bruno", 25};
    Pessoa p3 = {"Carla", 28};

    inserirNoFim(&lista, p1);
    inserirNoFim(&lista, p2);
    inserir(&lista, 1, p3); // insere Carla entre Alice e Bruno

    imprimirLista(&lista);

    remover(&lista, 0); // remove Alice

    imprimirLista(&lista);

    return 0;
}
