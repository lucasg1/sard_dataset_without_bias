namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    if(GLOBAL_CONST_TRUE)
    {
        {
            char buffer[sizeof(TwoIntsClass)];
            TwoIntsClass * dataBuffer = new(buffer) TwoIntsClass;
            dataBuffer->intOne = 2;
            dataBuffer->intTwo = 2;
            data = dataBuffer;
        }
    }
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
} 
