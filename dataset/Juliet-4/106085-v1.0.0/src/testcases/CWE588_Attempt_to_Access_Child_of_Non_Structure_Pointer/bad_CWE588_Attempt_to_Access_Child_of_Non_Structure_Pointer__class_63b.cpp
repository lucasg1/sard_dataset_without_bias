namespace NAMESPACE0
{
void FUN0(void * * dataPtr);
void FUN1()
{
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR2;
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * * dataPtr)
{
    void * data = *dataPtr;
<START>
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
<END>
}
} 
