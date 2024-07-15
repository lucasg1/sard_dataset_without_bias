namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
<START>
    delete [] data;
<END>
}
} 
