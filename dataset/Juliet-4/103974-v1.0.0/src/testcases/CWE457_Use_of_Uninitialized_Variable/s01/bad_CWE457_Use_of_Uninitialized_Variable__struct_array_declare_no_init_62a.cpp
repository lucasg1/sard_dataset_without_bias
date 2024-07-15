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
    twoIntsStruct dataUninitArray[10];
    data = dataUninitArray;
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
