namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            twoIntsStruct * dataBuffer = new twoIntsStruct;
            dataBuffer->intOne = 1;
            dataBuffer->intTwo = 1;
            data = dataBuffer;
        }
    }
    printStructLine(data);
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    if(1)
    {
        {
            twoIntsStruct * dataBuffer = new twoIntsStruct;
            dataBuffer->intOne = 1;
            dataBuffer->intTwo = 1;
            data = dataBuffer;
        }
    }
    printStructLine(data);
    delete data;
}
} 
