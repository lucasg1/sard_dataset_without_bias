namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    if(globalReturnsTrue())
    {
        {
            char buffer[sizeof(twoIntsStruct)];
            twoIntsStruct * dataBuffer = new(buffer) twoIntsStruct;
            dataBuffer->intOne = 1;
            dataBuffer->intTwo = 1;
            data = dataBuffer;
        }
    }
    printStructLine(data);
<START>
    delete data;
<END>
}
} 
