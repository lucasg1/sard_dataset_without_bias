namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    data = NULL;
    data = new twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
<START>
<END>
    ; 
}
} 
