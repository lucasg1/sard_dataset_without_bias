namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    long * data;
    data = NULL;
    data = (long *)calloc(100, sizeof(long));
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    long * * dataPtr = (long * *)dataVoidPtr;
    long * data = (*dataPtr);
    delete data;
}
void FUN2(void * dataVoidPtr)
{
    long * * dataPtr = (long * *)dataVoidPtr;
    long * data = (*dataPtr);
    free(data);
}
} 
