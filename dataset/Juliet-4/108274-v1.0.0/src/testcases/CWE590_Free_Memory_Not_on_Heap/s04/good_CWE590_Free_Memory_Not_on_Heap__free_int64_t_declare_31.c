void FUN0()
{
    int64_t * data;
    data = NULL; 
    {
        int64_t * dataBuffer = (int64_t *)malloc(100*sizeof(int64_t));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        printLongLongLine(data[0]);
        free(data);
    }
}
