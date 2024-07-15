namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * *dataPtr1 = &data;
    TwoIntsClass * *dataPtr2 = &data;
    data = NULL; 
    {
        TwoIntsClass * data = *dataPtr1;
        {
            TwoIntsClass * dataBuffer = new TwoIntsClass;
            dataBuffer->intOne = 2;
            dataBuffer->intTwo = 2;
            data = dataBuffer;
        }
        *dataPtr1 = data;
    }
    {
        TwoIntsClass * data = *dataPtr2;
        printIntLine(data->intOne);
        delete data;
    }
}
} 
