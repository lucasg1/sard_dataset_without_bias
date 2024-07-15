namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    *data = 5L;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    long * data;
    data = NULL;
    data = new long;
    *data = 5L;
    delete data;
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    long * * dataPtr = (long * *)dataVoidPtr;
    long * data = (*dataPtr);
    printLongLine(*data);
}
void FUN2(void * dataVoidPtr)
{
    long * * dataPtr = (long * *)dataVoidPtr;
    long * data = (*dataPtr);
    ; 
}
} 
