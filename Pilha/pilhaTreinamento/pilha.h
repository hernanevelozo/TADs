/*
@ Name: Stack with Arrays
@ Author: Hernane Velozo | Created on 12/29/2022
@ Why: A simple review of AEDS for Grafos discipline and improve the logical
*/


typedef int TipoItem;
const int max_itens = 100;


class pilha{
    
    private:
    int tamanho;
    TipoItem* estrutura;
    
    public:
    pilha();                    // constructor
    ~pilha();                   // destructor
    bool estaCheia();           // return true if is fully
    bool estaVazia();           // return true if is empty
    void inserir(TipoItem item);     // push (inserir)
    TipoItem remover();         // pop (remover)
    void imprimir();            // imprime
    int qualTamanho();          // lenght

};