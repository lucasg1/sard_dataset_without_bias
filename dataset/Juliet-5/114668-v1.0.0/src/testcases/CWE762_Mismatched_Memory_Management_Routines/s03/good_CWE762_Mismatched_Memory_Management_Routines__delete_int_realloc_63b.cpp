namespace NAMESPACE0
{
void FUN0(int * * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int;
    FUN0(&data);
}
void FUN2(int * * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    delete data;
}
void FUN2(int * * dataPtr)
{
    int * data = *dataPtr;
    free(data);
}
} 
