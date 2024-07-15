namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
    printStructLine(data);
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    {
        twoIntsStruct * dataBuffer = new twoIntsStruct;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    FUN0(data);
}
} 
