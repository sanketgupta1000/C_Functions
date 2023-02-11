int sumintarr(int *, int);
int sumintarr(int *p, int size)
{
    int i, sum=0;
    for(i=0; i<size; i++)
    {
        sum+=p[i];
    }
    return sum;
}