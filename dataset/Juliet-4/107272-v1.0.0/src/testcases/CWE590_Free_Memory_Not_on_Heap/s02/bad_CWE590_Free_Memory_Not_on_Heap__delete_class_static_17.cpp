namespace NAMESPACE0
{
void FUN0()
{
    int i;
    TwoIntsClass * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        {
            static TwoIntsClass dataBuffer;
            dataBuffer.intOne = 1;
            dataBuffer.intTwo = 1;
            data = &dataBuffer;
        }
    }
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
} 
