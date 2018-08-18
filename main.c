#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LISTA.c"

int main(){
	TipoLista lista;
	Vazia(&lista);
	TipoApontador p;
	Aluno var;
	int i;
	for(i=0; i<4; i++){
		scanf("%s %s %d %d", &var.nome, &var.cpf, &var.idade, &var.matricula);
		Insere(var, &lista);
	}
	printf("\nAntes de retirar:\n\n");
	Imprime(lista);
	printf("Depois de retirar:\n\n");
	p = lista.primeiro -> prox;
	Retira(p, &lista);
	Imprime(lista);
	printf("\n");
	return 0;
}
