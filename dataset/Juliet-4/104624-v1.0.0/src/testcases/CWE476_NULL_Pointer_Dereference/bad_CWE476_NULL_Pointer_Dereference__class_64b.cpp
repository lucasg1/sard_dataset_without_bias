namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    TwoIntsClass * * dataPtr = (TwoIntsClass * *)dataVoidPtr;
    TwoIntsClass * data = (*dataPtr);
<START>
    printIntLine(data->intOne);
<END>
    delete data;
}
} 
