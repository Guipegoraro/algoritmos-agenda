int Listar() {
    printf("Contatos:\n");

    for (int i=0; i < ULTIMO_ID_VALIDO; i++) {
        printf((i + 1) + "-" + ("%s", &(Contatos[i].nome)) + " ID: " + ("%s", &(Contatos[i].id)));
    }

    return 0;
}