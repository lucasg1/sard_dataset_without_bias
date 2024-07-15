namespace NAMESPACE0
{
static TwoIntsClass * VAR1;
static TwoIntsClass * VAR2;
void FUN0()
{
    TwoIntsClass * data = VAR1;
    printIntLine(data[0].intOne);
<START>
    delete [] data;
<END>
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        TwoIntsClass dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
