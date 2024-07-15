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
    }
    printIntLine(data[0].intOne);
    delete [] data;
}
} 
