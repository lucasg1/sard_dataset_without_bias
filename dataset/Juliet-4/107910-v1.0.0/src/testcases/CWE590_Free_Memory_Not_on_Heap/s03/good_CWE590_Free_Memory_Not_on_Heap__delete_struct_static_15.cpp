namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        twoIntsStruct * dataBuffer = new twoIntsStruct;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    break;
    }
    printStructLine(data);
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        twoIntsStruct * dataBuffer = new twoIntsStruct;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printStructLine(data);
    delete data;
}
} 
