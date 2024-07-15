namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    while(1)
    {
        {
            TwoIntsClass dataBuffer;
            dataBuffer.intOne = 1;
            dataBuffer.intTwo = 1;
            data = &dataBuffer;
        }
        break;
    }
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
} 
