void scanintarr(int *, int);
void scanintarr(int *p, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        scanf("%d", (p+i));
    }
}