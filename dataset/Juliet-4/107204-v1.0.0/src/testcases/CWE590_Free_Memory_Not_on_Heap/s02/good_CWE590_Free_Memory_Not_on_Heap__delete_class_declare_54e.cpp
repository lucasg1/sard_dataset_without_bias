namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1(TwoIntsClass * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(TwoIntsClass * data);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        TwoIntsClass * dataBuffer = new TwoIntsClass;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(TwoIntsClass * data);
void FUN2(TwoIntsClass * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN7(TwoIntsClass * data);
void FUN0(TwoIntsClass * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN7(TwoIntsClass * data)
{
    printIntLine(data->intOne);
    delete data;
}
} 
