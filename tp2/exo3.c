
int valeursup(Tab t, int n ,int i,int v)
{
    int res=0;
    if (i<n)
    {
        if (t[i]>v)
        {
            res=1+valeursup(t,n,i+1,v);
        }
        else
        {
            res=valeursup(t,n,i+1,v);
        }
    }
    return res;
}