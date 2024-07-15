namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        TwoIntsClass * dataBuffer = new TwoIntsClass;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
        printIntLine(data->intOne);
        delete data;
    }
}
} 
