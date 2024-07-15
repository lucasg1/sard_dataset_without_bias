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
void FUN3(twoIntsStruct * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN3(twoIntsStruct * data);
void FUN5()
{
    twoIntsStruct * data;
    data = NULL; 
    {
        twoIntsStruct * dataBuffer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
        dataBuffer->intOne = 1;
        dataBuffer->intTwo = 1;
        data = dataBuffer;
    }
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN6(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(twoIntsStruct * data)
{
    printStructLine(data);
<START>
    delete data;
<END>
}
} 
