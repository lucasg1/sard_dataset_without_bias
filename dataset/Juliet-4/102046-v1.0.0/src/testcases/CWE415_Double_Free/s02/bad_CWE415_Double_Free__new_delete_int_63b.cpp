namespace NAMESPACE0
{
void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int;
    delete data;
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
<START>
    delete data;
<END>
}
} 
