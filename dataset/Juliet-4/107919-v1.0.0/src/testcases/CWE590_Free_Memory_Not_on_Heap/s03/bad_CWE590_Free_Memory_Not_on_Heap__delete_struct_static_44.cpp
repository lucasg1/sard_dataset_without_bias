namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
    printStructLine(data);
<START>
    delete data;
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    data = NULL; 
    {
        static twoIntsStruct dataBuffer;
        dataBuffer.intOne = 1;
        dataBuffer.intTwo = 1;
        data = &dataBuffer;
    }
    funcPtr(data);
}
} 
