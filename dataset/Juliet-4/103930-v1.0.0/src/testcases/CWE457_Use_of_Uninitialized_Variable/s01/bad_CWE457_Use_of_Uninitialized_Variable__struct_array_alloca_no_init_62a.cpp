namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data);
void FUN2()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    FUN0(data);
    {
        int i;
        for(i=0; i<10; i++)
        {
<START>
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
<END>
        }
    }
}
} 
