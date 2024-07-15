namespace NAMESPACE0
{
void FUN0(TwoIntsClass * * dataPtr);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * * dataPtr)
{
    TwoIntsClass * data = *dataPtr;
<START>
    printIntLine(data->intOne);
<END>
    delete data;
}
} 
