void modifierNom(Tab t, int nbClients, int i) {
    if (i < nbClients) {
        printf("Saisir le nouveau nom du client : ");
        scanf("%s", t[i].nom);
    }
}