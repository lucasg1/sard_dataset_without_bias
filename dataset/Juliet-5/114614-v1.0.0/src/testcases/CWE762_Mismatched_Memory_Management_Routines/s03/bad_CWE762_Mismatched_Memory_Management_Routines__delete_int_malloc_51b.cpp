namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
<START>
    delete data;
<END>
}
} 
