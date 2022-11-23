int main()
{
    double temps_debut, temps_fin;
    int i;
    double moyenne1 = 0, moyenne2 = 0;
    Tab t1, t2;
    remplirTableau(t1, N);
    copierTableau(t1, t2, N);
    printf("Tableau initial :\n");
    afficherTableau(t1, N);
    printf("Tableau trié par sélection :\n");
    temps_debut=(double)clock();
    triSelection(t1, N);
    temps_fin = (double)clock();
    afficherTableau(t1, N);
    printf("\nDuree de traitement : %f ms\n", 1000*(temps_fin - temps_debut)/CLOCKS_PER_SEC);
    printf("Tableau trié par rapide :\n");
    temps_debut=(double)clock();
    triRapide(t2, N);
    temps_fin = (double)clock();
    afficherTableau(t2, N);
    printf("\nDuree de traitement : %f ms\n", 1000*(temps_fin - temps_debut)/CLOCKS_PER_SEC);

    for(i=0; i<10; i++){
        remplirTableau(t1, N);
        copierTableau(t1, t2, N);
        temps_debut=(double)clock();
        triSelection(t1, N);
        temps_fin = (double)clock();
        moyenne1 += 1000*(temps_fin - temps_debut)/CLOCKS_PER_SEC;
        temps_debut=(double)clock();
        triRapide(t2, N);
        temps_fin = (double)clock();
        moyenne2 += 1000*(temps_fin - temps_debut)/CLOCKS_PER_SEC;
    }
    printf("\nDuree de traitement moyen de triSelection : %f ms\n", moyenne1/10);
    printf("\nDuree de traitement moyen de triRapide : %f ms\n", moyenne2/10);
    return 0;
}
