namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    while(1)
    {
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
        break;
    }
    printIntLine(data[0].intOne);
    delete [] data;
}
} 
