namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = new long[100];
    {
        long * dataCopy = data;
        long * data = dataCopy;
        delete [] data;
    }
}
void FUN1()
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
} 
