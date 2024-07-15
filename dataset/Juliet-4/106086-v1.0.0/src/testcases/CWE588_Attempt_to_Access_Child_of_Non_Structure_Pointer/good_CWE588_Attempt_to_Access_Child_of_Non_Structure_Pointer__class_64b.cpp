namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR1;
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    void * * dataPtr = (void * *)dataVoidPtr;
    void * data = (*dataPtr);
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
} 
