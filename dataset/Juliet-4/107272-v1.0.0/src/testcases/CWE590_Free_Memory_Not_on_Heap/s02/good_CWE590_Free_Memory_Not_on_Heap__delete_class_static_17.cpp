namespace NAMESPACE0
{
void FUN0()
{
    int h;
    TwoIntsClass * data;
    data = NULL; 
    for(h = 0; h < 1; h++)
    {
        {
            TwoIntsClass * dataBuffer = new TwoIntsClass;
            dataBuffer->intOne = 2;
            dataBuffer->intTwo = 2;
            data = dataBuffer;
        }
    }
    printIntLine(data->intOne);
    delete data;
}
} 
