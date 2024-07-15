namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass data;
    data.intOne = 1;
    data.intTwo = 2;
    FUN0(&data);
}
void FUN2(TwoIntsClass * data);
void FUN3()
{
    TwoIntsClass data;
    ; 
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * dataPtr)
{
    TwoIntsClass data = *dataPtr;
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
void FUN2(TwoIntsClass * dataPtr)
{
    dataPtr->intOne = 1;
    dataPtr->intTwo = 2;
    TwoIntsClass data = *dataPtr;
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
} 
