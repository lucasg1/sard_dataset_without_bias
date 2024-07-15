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
        long * dataBuffer = (long *)malloc(100*sizeof(long));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
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
    free(data);
}
void FUN1()
{
    long * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        long * dataBuffer = (long *)malloc(100*sizeof(long));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
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
    free(data);
}
