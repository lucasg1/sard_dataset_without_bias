namespace NAMESPACE0
{
void FUN0(int64_t * * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    int64_t VAR1;
    data = &VAR1;
    *data = 5LL;
    printLongLongLine(*data);
    FUN0(&data);
}
void FUN2(int64_t * * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    *data = 5LL;
    printLongLongLine(*data);
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    ; 
}
void FUN2(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    delete data;
}
} 
