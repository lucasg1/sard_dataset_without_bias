namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = new TwoIntsClass[10];
    ; 
    for(int i=0; i<10; i++)
    {
<START>
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
<END>
    }
}
} 
