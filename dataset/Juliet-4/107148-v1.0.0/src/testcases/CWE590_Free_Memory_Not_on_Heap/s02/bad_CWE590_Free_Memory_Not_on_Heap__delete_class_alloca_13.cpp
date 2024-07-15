namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    if(GLOBAL_CONST_FIVE==5)
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
