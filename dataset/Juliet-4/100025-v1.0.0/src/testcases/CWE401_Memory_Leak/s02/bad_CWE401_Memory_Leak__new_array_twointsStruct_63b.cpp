namespace NAMESPACE0
{
void FUN0(twoIntsStruct * * dataPtr);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
<START>
<END>
    ; 
}
} 
