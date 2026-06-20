enum TipoDeContato {
    PESSOAL = 0,
    Trabalho = 1
};

int ULTIMO_ID_VALIDO = 0;

struct contato {
  int id;
  char nome[30];
  char telefone[11];
  enum TipoDeContato;
  void *localizacao;
};

 
