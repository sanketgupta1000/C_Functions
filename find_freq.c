int freq_of(char, char *, int);
int freq_of(char badam, char *laddoo, int size)
{
    int i, freq;
    for(i=0, freq=0; i<size; i++)
    {
        if(*(laddoo+i)==badam)
        {
            freq++;
        }
    }
    return freq;
}