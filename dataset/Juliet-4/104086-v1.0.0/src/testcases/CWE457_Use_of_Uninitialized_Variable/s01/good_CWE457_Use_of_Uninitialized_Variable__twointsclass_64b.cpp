namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    TwoIntsClass data;
    data.intOne = 1;
    data.intTwo = 2;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    TwoIntsClass data;
    ; 
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    TwoIntsClass * dataPtr = (TwoIntsClass *)dataVoidPtr;
    TwoIntsClass data = (*dataPtr);
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
void FUN2(void * dataVoidPtr)
{
    TwoIntsClass * dataPtr = (TwoIntsClass *)dataVoidPtr;
    TwoIntsClass data = (*dataPtr);
    data.intOne = 1;
    data.intTwo = 2;
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
} 
