namespace NAMESPACE0
{
void FUN0(TwoIntsClass * * dataPtr);
void FUN1()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    ; 
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * * dataPtr)
{
    TwoIntsClass * data = *dataPtr;
    for(int i=0; i<10; i++)
    {
<START>
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
<END>
    }
}
} 
