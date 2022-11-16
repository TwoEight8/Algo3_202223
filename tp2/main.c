int main ()
{Tab t1 = {4,2,8,0,7,3,1,5,9,6};

Tab t2 = {4,2,8,0,7,3,1,5,9,6};
    printf("La somme des entiers du tableau t1 est %d\n",somme(t1,N,0));
    printf( "fonction récurive d'affichage du contenu du tableau");
    affiche(t1,N,0);
    printf("La somme des entiers du tableau t1 est %d\n",somme2parametre(t1,N));
    printf("Le nombre d'elements du tableau de valeur superieur a 5 est %d\n",valeursup(t1,N,0,5));
    printf( "fonction récurive d'affichage du contenu du tableau");
    affichedecroissant(t1,N,N-1);
    printf("L'indice de la valeur 5 est %d\n",rechercheval(t1,N,0,5));
    printf("L'indice de la valeur 5 est %d\n",recherchevaldichotomique(t2,N,0,5));

    return 0;
}