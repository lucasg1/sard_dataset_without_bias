namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        TwoIntsClass dataBuffer;
        dataBuffer.intOne = 1;
        dataBuffer.intTwo = 1;
        data = &dataBuffer;
    }
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
} 
