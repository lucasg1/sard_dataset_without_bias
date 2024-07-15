namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    int64_t * * dataPtr = (int64_t * *)dataVoidPtr;
    int64_t * data = (*dataPtr);
    free(data);
}
void FUN2(void * dataVoidPtr)
{
    int64_t * * dataPtr = (int64_t * *)dataVoidPtr;
    int64_t * data = (*dataPtr);
    delete [] data;
}
} 
