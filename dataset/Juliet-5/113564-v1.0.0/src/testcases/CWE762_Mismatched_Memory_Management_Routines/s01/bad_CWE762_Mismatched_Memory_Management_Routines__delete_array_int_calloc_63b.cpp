namespace NAMESPACE0
{
void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)calloc(100, sizeof(int));
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
<START>
    delete [] data;
<END>
}
} 
