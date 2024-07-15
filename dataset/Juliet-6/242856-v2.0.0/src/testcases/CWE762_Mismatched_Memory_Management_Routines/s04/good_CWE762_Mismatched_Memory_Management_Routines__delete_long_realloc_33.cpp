namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * &dataRef = data;
    data = NULL;
    data = new long;
    {
        long * data = dataRef;
        delete data;
    }
}
void FUN1()
{
    long * data;
    long * &dataRef = data;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    if (data == NULL) {exit(-1);}
    {
        long * data = dataRef;
        free(data);
    }
}
} 
