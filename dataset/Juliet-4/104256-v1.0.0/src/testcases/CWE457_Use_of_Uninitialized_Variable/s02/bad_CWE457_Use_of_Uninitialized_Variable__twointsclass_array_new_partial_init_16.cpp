namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = new TwoIntsClass[10];
    while(1)
    {
        for(int i=0; i<(10/2); i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
        break;
    }
    while(1)
    {
        for(int i=0; i<10; i++)
        {
<START>
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
<END>
        }
        break;
    }
}
} 
