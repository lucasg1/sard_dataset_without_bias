void FUN0(void * dataVoidPtr);
void FUN1()
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
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    long * * dataPtr = (long * *)dataVoidPtr;
    long * data = (*dataPtr);
    printLongLine(data[0]);
<START>
    free(data);
<END>
}
