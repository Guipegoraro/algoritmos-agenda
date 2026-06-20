enum TipoDeContato
{
  PESSOAL = 0,
  Trabalho = 1
};

int ULTIMO_ID_VALIDO = 0;

typedef struct
{
  int id;
  char nome[30];
  char telefone[11];
  enum TipoDeContato;
} Contato;

