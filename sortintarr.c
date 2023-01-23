//Selection Sort
void sortintarr(int *, int);

void sortintarr(int *p, int size)
{
    int i, j, temp, min_ind;
    for(i=0; i<(size-1); i++)
    {
        for(min_ind=i, j=i+1; j<size; j++)
        {
            if((*(p+j))<(*(p+min_ind)))
            {
                min_ind=j;
            }
        }
        temp=*(p+i);
        *(p+i)=*(p+min_ind);
        *(p+min_ind)=temp;
    }
}