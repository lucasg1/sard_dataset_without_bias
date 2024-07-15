namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
    printLongLine(data[0]);
    delete [] data;
}
void FUN1()
{
    long * data;
    data = NULL; 
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLongLine(data[0]);
    delete [] data;
}
} 
