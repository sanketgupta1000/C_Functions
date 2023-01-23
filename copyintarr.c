void copyintarr(int *, int *, int);

void copyintarr(int *dest, int *src, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        *(dest+i)=*(src+i);
    }
}