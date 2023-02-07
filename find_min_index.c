int find_min_index(int *, int);
int find_min_index(int *p, int size)
{
    int i, min_i=0;
    for(i=1; i<size; i++)
    {
        if(p[i]<p[min_i])
        {
            min_i=i;
        }
    }
    return min_i;
}