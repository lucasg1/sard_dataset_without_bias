namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL; 
    {
        char buffer[sizeof(TwoIntsClass)];
        TwoIntsClass * dataBuffer = new(buffer) TwoIntsClass;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    {
        TwoIntsClass * data = dataRef;
        printIntLine(data->intOne);
<START>
        delete data;
<END>
    }
}
} 
