namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data);
void FUN2()
{
    TwoIntsClass * data;
    data = new TwoIntsClass[10];
    FUN0(data);
    for(int i=0; i<10; i++)
    {
<START>
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
<END>
    }
}
} 
