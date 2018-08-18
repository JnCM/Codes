#include "LISTA.h"

void Vazia(TipoLista *Lista){
	Lista -> primeiro = (TipoApontador)malloc(sizeof(TipoCelula));
	Lista -> ultimo = Lista -> primeiro;
	Lista -> primeiro -> prox = NULL;
}

void Insere(Aluno x, TipoLista *Lista){
	Lista -> ultimo -> prox = (TipoApontador)malloc(sizeof(TipoCelula));
	Lista -> ultimo = Lista -> ultimo -> prox;
	Lista -> ultimo -> dados = x;
	Lista -> ultimo -> prox = NULL;
}
void Retira(TipoApontador p, TipoLista *Lista){
	TipoApontador q;
	if (p == NULL || p -> prox == NULL){
		printf("Lista Vazia ou posicao nao existe!\n\n");
	}
	q = p -> prox;
	if (p -> prox == NULL){
		Lista -> ultimo = p;
	}
	else{
        p -> prox = q -> prox;
	}
	free(q);
}
void Imprime(TipoLista Lista){
	TipoApontador aux;
	aux = Lista.primeiro -> prox;
	while (aux != NULL){
		printf("NOME: %s\nCPF: %s\nIDADE: %d\nMAT: %d\n", aux -> dados.nome, aux -> dados.cpf, aux -> dados.idade, aux -> dados.matricula);
		printf("\n");
		aux = aux -> prox;
	}
}
