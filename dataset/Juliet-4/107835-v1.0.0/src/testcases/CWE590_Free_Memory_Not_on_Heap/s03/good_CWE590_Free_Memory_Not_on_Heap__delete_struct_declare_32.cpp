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
            twoIntsStruct * dataBuffer = new twoIntsStruct;
            dataBuffer->intOne = 2;
            dataBuffer->intTwo = 2;
            data = dataBuffer;
        }
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        printStructLine(data);
        delete data;
    }
}
} 
