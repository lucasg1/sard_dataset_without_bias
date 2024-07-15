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
            TwoIntsClass * dataBuffer = (TwoIntsClass *)ALLOCA(sizeof(TwoIntsClass));
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
