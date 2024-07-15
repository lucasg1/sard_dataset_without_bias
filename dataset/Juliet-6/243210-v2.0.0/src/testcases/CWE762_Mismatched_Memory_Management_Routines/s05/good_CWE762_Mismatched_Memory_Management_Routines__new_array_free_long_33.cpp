namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * &dataRef = data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    {
        long * data = dataRef;
        free(data);
    }
}
void FUN1()
{
    long * data;
    long * &dataRef = data;
    data = NULL;
    data = new long[100];
    {
        long * data = dataRef;
        delete [] data;
    }
}
} 
