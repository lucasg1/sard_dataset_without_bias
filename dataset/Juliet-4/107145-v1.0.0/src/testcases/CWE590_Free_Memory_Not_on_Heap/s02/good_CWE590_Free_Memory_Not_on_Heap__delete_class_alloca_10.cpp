namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            TwoIntsClass * dataBuffer = new TwoIntsClass;
            dataBuffer->intOne = 2;
            dataBuffer->intTwo = 2;
            data = dataBuffer;
        }
    }
    printIntLine(data->intOne);
    delete data;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL; 
    if(globalTrue)
    {
        {
            TwoIntsClass * dataBuffer = new TwoIntsClass;
            dataBuffer->intOne = 2;
            dataBuffer->intTwo = 2;
            data = dataBuffer;
        }
    }
    printIntLine(data->intOne);
    delete data;
}
} 
