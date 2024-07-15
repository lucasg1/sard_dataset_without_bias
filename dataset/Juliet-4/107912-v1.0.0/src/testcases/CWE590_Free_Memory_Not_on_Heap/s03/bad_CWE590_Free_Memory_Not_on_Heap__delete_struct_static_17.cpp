namespace NAMESPACE0
{
void FUN0()
{
    int i;
    twoIntsStruct * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        {
            static twoIntsStruct dataBuffer;
            dataBuffer.intOne = 1;
            dataBuffer.intTwo = 1;
            data = &dataBuffer;
        }
    }
    printStructLine(data);
<START>
    delete data;
<END>
}
} 
