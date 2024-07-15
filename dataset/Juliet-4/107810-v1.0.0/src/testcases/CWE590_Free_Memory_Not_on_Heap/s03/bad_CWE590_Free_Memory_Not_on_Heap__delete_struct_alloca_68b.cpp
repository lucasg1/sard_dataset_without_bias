twoIntsStruct * VAR0;
twoIntsStruct * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    {
        twoIntsStruct * dataBuffer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
        dataBuffer->intOne = 1;
        dataBuffer->intTwo = 1;
        data = dataBuffer;
    }
    VAR0 = data;
    FUN0();
}
} 
extern twoIntsStruct * VAR0;
extern twoIntsStruct * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    twoIntsStruct * data = VAR0;
    printStructLine(data);
<START>
    delete data;
<END>
}
} 
