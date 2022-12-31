#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha()
{
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
} // constructor

pilha::~pilha()
{
    delete[] estrutura;
} // destructor

bool pilha::estaCheia()
{
    return (tamanho == max_itens);
} // return true if is fully

bool pilha::estaVazia()
{
    return (tamanho == 0);
} // return true if is empty

void pilha::inserir(TipoItem item)
{
    if (estaCheia())
    {
        cout << "a pilha esta cheia!";
        cout << "nao e possivel inserir este elemento!";
    }
    else
    {
        estrutura[tamanho] = item;
        tamanho++;
    }
} // push (inserir)

TipoItem pilha::remover()
{
    if (estaVazia())
    {
        cout << "a pilha esta vazia!\n";
        cout << "Nao ha elemento para ser removido\n";
        return 0;
    }
    else
    {
        tamanho--;
        return estrutura[tamanho];
    }
} // pop (remover)

void pilha::imprimir()
{
    cout << "Pilha: [ ";
    for (int i = 0; i < tamanho; i++)
    {

        cout << estrutura[i] << " ";
    }
    cout << "]\n";
} // print

int pilha::qualTamanho()
{
    return tamanho;
} // lenght
