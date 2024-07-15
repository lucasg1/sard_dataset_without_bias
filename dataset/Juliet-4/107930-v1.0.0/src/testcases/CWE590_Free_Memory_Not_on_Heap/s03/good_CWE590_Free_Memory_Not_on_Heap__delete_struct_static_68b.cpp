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
        twoIntsStruct * dataBuffer = new twoIntsStruct;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
extern twoIntsStruct * VAR0;
extern twoIntsStruct * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    twoIntsStruct * data = VAR1;
    printStructLine(data);
    delete data;
}
} 
