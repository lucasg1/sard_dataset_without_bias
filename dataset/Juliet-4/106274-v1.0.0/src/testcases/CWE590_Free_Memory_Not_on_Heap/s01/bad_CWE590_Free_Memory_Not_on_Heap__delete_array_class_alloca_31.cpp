namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        TwoIntsClass * dataBuffer = (TwoIntsClass *)ALLOCA(100*sizeof(TwoIntsClass));
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
    {
        TwoIntsClass * dataCopy = data;
        TwoIntsClass * data = dataCopy;
        printIntLine(data[0].intOne);
<START>
        delete [] data;
<END>
    }
}
} 
