void FUN0()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    {
        long * dataCopy = data;
        long * data = dataCopy;
        free(data);
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    {
        long * dataCopy = data;
        long * data = dataCopy;
        ; 
    }
}
