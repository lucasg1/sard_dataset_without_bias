namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    data = NULL; 
    {
        twoIntsStruct * data = *dataPtr1;
        {
            twoIntsStruct dataBuffer;
            dataBuffer.intOne = 1;
            dataBuffer.intTwo = 1;
            data = &dataBuffer;
        }
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        printStructLine(data);
<START>
        delete data;
<END>
    }
}
} 
