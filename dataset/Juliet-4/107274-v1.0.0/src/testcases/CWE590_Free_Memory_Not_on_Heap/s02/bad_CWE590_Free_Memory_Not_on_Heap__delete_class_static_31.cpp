namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        static TwoIntsClass dataBuffer;
        dataBuffer.intOne = 1;
        dataBuffer.intTwo = 1;
        data = &dataBuffer;
    }
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
        printIntLine(data->intOne);
<START>
        delete data;
<END>
    }
}
} 
