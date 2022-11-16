void affichedecroissant(Tab t, int n ,int i)
{
    if (i>=0)
    {
        printf("t[%d]=%d\n",i,t[i]);
        affichedecroissant(t,n,i-1);
    }
}