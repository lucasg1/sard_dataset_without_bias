void FUN0()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = (long *)ALLOCA(100*sizeof(long));
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    {
        long * dataCopy = data;
        long * data = dataCopy;
        printLongLine(data[0]);
<START>
        free(data);
<END>
    }
}
