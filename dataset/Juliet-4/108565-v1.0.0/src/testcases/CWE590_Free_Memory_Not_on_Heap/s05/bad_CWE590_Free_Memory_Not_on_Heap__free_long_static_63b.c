void FUN0(long * * dataPtr);
void FUN1()
{
    long * data;
    data = NULL; 
    {
        static long dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    FUN0(&data);
}
void FUN0(long * * dataPtr)
{
    long * data = *dataPtr;
    printLongLine(data[0]);
<START>
    free(data);
<END>
}
