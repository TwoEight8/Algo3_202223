void affiche(Tab t, int n ,int i)
{
    if (i<n)
    {
        printf("t[%d]=%d\n",i,t[i]);
        affiche(t,n,i+1);
    }
}