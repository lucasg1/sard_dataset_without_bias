namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
    printIntLine(data[0].intOne);
    delete [] data;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        TwoIntsClass * dataBuffer = new TwoIntsClass[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
    FUN0(data);
}
} 
