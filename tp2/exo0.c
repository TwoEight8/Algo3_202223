
#include <stdio.h>
#define N 10

typedef int Tab[N];

int somme(Tab t, int n ,int i)
{int res=0;
    printf("Calcult de la somme a partir de l'indice %d : \n",i+1);
    if (i<n)
    {printf("\t appel du calcul de la somme a partir de l'indice %d:\n",i+1);
        res=t[i]+somme(t,n,i+1);
        printf("\t addition avec t [%d\n",i);
    }
    printf("\t Somme a partir de l'id=ndice %d=%d\n\n",i,res);
    return res;
}

int main ()
{Tab t1 = {4,2,8,0,7,3,1,5,9,6};

 printf("La somme des entiers du tableau t1 est %d\n",somme(t1,N,0));
return 0;
}