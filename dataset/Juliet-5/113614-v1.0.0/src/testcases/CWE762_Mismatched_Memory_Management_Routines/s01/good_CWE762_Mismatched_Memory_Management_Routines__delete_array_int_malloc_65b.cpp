namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = new int[100];
    funcPtr(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    void (*funcPtr) (int *) = FUN2;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
    delete [] data;
}
void FUN2(int * data)
{
    free(data);
}
} 
