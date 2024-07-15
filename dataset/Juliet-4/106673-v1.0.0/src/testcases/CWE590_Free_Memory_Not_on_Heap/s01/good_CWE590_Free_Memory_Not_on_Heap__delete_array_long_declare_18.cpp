namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    goto source;
source:
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
    printLongLine(data[0]);
    delete [] data;
}
} 
