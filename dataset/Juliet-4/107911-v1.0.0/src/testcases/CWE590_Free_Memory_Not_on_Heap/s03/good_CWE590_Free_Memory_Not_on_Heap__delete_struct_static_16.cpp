namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    while(1)
    {
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
} 
