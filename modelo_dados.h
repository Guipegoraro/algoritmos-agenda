#ifndef modelo_dados
#define modelo_dados



enum TipoDeContato
{
  PESSOAL = 0,
  TRABALHO = 1
};

typedef struct 
{
  int id;
  char nome[30];
  char telefone[11];
  enum TipoDeContato tipo;
} Contato;


extern Contato *CONTATOS;
extern int ULTIMO_ID_VALIDO;

#endif