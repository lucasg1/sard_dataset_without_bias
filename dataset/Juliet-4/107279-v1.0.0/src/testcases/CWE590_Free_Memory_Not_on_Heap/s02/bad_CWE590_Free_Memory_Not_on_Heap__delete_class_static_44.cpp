namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
void FUN1()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN0;
    data = NULL; 
    {
        static TwoIntsClass dataBuffer;
        dataBuffer.intOne = 1;
        dataBuffer.intTwo = 1;
        data = &dataBuffer;
    }
    funcPtr(data);
}
} 
