namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass dataUninitArray[10];
    data = dataUninitArray;
    if(1)
    {
        ; 
    }
    if(1)
    {
        for(int i=0; i<10; i++)
        {
<START>
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
<END>
        }
    }
}
} 
