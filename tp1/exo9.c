int ajouterSansDoublon(Client c, Tab t, int * nbClients) {
    int i;
    for (i = 0; i < *nbClients; i++) {
        if (t[i].idClient == c.idClient && strcmp(t[i].nom, c.nom) == 0) {
            return 0;
        }
    }
    ajouter(c, t, nbClients);
    return 1;
}