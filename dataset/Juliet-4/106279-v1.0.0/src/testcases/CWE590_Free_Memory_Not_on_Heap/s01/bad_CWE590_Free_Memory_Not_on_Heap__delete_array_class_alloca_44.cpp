namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
    printIntLine(data[0].intOne);
<START>
    delete [] data;
<END>
}
void FUN1()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN0;
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
    funcPtr(data);
}
} 
