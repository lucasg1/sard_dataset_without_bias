namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL; 
    {
        char buffer[sizeof(twoIntsStruct)];
        twoIntsStruct * dataBuffer = new(buffer) twoIntsStruct;
        dataBuffer->intOne = 1;
        dataBuffer->intTwo = 1;
        data = dataBuffer;
    }
    {
        twoIntsStruct * data = dataRef;
        printStructLine(data);
<START>
        delete data;
<END>
    }
}
} 
