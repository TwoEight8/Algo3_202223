int somme2parametre(Tab t, int n)
{
    int res=0;
    if (n>0)
    {
        res=t[n-1]+somme2parametre(t,n-1);
    }
    return res;
}