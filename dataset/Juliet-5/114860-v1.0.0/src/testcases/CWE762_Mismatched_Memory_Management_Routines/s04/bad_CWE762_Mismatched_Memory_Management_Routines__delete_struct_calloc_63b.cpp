namespace NAMESPACE0
{
void FUN0(twoIntsStruct * * dataPtr);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
<START>
    delete data;
<END>
}
} 
