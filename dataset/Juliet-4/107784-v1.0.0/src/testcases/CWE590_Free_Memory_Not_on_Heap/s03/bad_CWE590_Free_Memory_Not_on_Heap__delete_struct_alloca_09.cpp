namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    if(GLOBAL_CONST_TRUE)
    {
        {
            twoIntsStruct * dataBuffer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
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
