int main() {
    Tab t;
    int nbClients = 0;
    int indiceClient;
    int indiceIdMin;
    int indiceIdMax;
    int nbDoublons;
    int idClient;
    Client c;
    saisieClients(t, 3, &nbClients);
    afficherClients(t, nbClients);
    printf("Saisir l'identifiant du client à modifier : ");
    scanf("%d", &idClient);
    if (rechercheClient(idClient, t, nbClients, &indiceClient)) {
        modifierNom(t, nbClients, indiceClient);
    }
    afficherClients(t, nbClients);
    rechercheIdMinMax(t, nbClients, &indiceIdMin, &indiceIdMax);
    printf("Client avec l'identifiant le plus petit : %d %s \n", t[indiceIdMin].idClient, t[indiceIdMin].nom);
    printf("Client avec l'identifiant le plus grand : %d %s \n", t[indiceIdMax].idClient, t[indiceIdMax].nom);
    nbDoublons = afficherDoublons(t, nbClients);
    printf("Nombre de doublons : %d \n", nbDoublons);
    saisie(&c);
    if (ajouterSansDoublon(c, t, &nbClients)) {
        printf("Client ajouté \n");
    } else {
        printf("Client non ajouté \n");
    }
    afficherClients(t, nbClients);
    printf("Saisir l'identifiant du client à enlever : ");
    scanf("%d", &idClient);
    if (enleverClient(idClient, t, &nbClients)) {
        printf("Client enlevé \n");
    } else {
        printf("Client non enlevé \n");
    }
    afficherClients(t, nbClients);
    return 0;
}
