namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
void FUN1(twoIntsStruct * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL; 
    {
        twoIntsStruct dataBuffer;
        dataBuffer.intOne = 1;
        dataBuffer.intTwo = 1;
        data = &dataBuffer;
    }
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN4(twoIntsStruct * data)
{
    printStructLine(data);
<START>
    delete data;
<END>
}
} 
