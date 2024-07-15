void FUN0(long * dataArray[]);
void FUN1()
{
    long * data;
    long * dataArray[5];
    data = NULL; 
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
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(long * dataArray[])
{
    long * data = dataArray[2];
    printLongLine(data[0]);
    free(data);
}
