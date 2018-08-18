typedef struct{
	char nome[30], cpf[20];
	int idade, matricula;
}Aluno;

typedef struct TipoCelula *TipoApontador;;

typedef struct TipoCelula{
	Aluno dados;
	TipoApontador prox;
}TipoCelula;

typedef struct{
	TipoApontador primeiro;
	TipoApontador ultimo;
}TipoLista;

void Vazia(TipoLista *Lista);
void Insere(Aluno x, TipoLista *Lista);
void Retira(TipoApontador p, TipoLista *Lista);
void Imprime(TipoLista Lista);
