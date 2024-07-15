namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    delete data;
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
<START>
    printIntLine(*data);
<END>
}
} 
