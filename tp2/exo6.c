int recherchevaldichotomique(Tab t, int n ,int i,int v)
{
    int res=-1;
    if (i<n)
    {
        if (t[i]==v)
        {
            res=i;
        }
        else
        {
            res=rechercheval(t,n,i+1,v);
        }
    }
    return res;
}