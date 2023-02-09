int gcd(int, int);
int gcdn(int *, int);

int gcd(int chhota, int bada)
{
    int temp;
    while(bada%chhota)
    {
        temp=bada;
        bada=chhota;
        chhota=temp%chhota;
    }
    return chhota;
}

int gcdn(int *p, int size)
{
    int gcd_of_n=p[0], i;
    for(i=1; i<size; i++)
    {
        gcd_of_n=gcd(gcd_of_n, p[i]);
    }
    return gcd_of_n;
}