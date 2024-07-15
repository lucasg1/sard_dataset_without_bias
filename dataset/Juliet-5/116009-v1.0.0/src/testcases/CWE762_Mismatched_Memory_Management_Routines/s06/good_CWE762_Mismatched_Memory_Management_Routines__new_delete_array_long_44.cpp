namespace NAMESPACE0
{
void FUN0(long * data)
{
    delete [] data;
}
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL;
    data = new long[100];
    funcPtr(data);
}
void FUN2(long * data)
{
    delete data;
}
void FUN3()
{
    long * data;
    void (*funcPtr) (long *) = FUN2;
    data = NULL;
    data = new long;
    funcPtr(data);
}
} 
