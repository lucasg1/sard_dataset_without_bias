namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
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
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN3(twoIntsStruct * data)
{
    printStructLine(data);
    delete data;
}
} 
