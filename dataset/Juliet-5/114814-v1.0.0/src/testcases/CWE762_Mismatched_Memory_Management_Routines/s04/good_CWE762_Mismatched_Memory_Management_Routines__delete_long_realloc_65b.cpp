namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL;
    data = new long;
    funcPtr(data);
}
void FUN2(long * data);
void FUN3()
{
    long * data;
    void (*funcPtr) (long *) = FUN2;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * data)
{
    delete data;
}
void FUN2(long * data)
{
    free(data);
}
} 
