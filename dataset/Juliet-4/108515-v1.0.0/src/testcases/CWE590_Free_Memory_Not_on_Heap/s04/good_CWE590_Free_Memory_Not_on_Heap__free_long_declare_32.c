void FUN0()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    data = NULL; 
    {
        long * data = *dataPtr1;
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
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        printLongLine(data[0]);
        free(data);
    }
}
