namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            long * dataBuffer = new long[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5L;
                }
            }
            data = dataBuffer;
        }
    }
    printLongLine(data[0]);
    delete [] data;
}
void FUN1()
{
    long * data;
    data = NULL; 
    if(1)
    {
        {
            long * dataBuffer = new long[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5L;
                }
            }
            data = dataBuffer;
        }
    }
    printLongLine(data[0]);
    delete [] data;
}
} 
