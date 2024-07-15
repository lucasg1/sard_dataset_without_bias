namespace NAMESPACE0
{
void FUN0(long * * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    FUN0(&data);
}
void FUN2(long * * data);
void FUN3()
{
    long * data;
    data = NULL;
    data = new long;
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * * dataPtr)
{
    long * data = *dataPtr;
    free(data);
}
void FUN2(long * * dataPtr)
{
    long * data = *dataPtr;
    delete data;
}
} 
