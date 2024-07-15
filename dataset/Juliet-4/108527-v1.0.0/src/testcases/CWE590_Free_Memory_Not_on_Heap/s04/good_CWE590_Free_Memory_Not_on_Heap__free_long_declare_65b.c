void FUN0(long * data);
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
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
    funcPtr(data);
}
void FUN0(long * data)
{
    printLongLine(data[0]);
    free(data);
}
