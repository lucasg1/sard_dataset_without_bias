void FUN0(long * dataArray[]);
void FUN1()
{
    long * data;
    long * dataArray[5];
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
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(long * dataArray[])
{
    long * data = dataArray[2];
    printLongLine(data[0]);
<START>
    free(data);
<END>
}
