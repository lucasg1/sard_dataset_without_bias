namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    delete data;
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
    delete data;
<END>
}
} 
