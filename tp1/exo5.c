void afficherClients(Tab t, int nbClients) {
    int i;
    for (i = 0; i < nbClients; i++) {
        printf("Client %d : %d %s \n", i, t[i].idClient, t[i].nom);
    }
}