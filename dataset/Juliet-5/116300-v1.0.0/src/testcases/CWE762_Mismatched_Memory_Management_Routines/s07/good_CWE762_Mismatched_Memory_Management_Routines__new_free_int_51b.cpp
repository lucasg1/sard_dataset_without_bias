namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1(int * data);
void FUN2()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    FUN0(data);
}
void FUN3()
{
    int * data;
    data = NULL;
    data = new int;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
    free(data);
}
void FUN1(int * data)
{
    delete data;
}
} 
