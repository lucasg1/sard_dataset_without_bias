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
        dataBuffer->intOne = 1;
        dataBuffer->intTwo = 1;
        data = dataBuffer;
    }
    FUN0(data);
}
} 
