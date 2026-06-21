#ifndef modelo_dados
#define modelo_dados



enum TipoDeContato
{
  PESSOAL = 0,
  TRABALHO = 1
};

extern int ULTIMO_ID_VALIDO;

typedef struct 
{
  int id;
  char nome[30];
  char telefone[11];
} Contato;


#endif