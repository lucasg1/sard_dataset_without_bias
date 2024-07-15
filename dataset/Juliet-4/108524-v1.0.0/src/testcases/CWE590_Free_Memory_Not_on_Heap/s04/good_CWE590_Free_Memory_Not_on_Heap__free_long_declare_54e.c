void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
void FUN2(long * data);
void FUN3()
{
    long * data;
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
    FUN2(data);
}
void FUN5(long * data);
void FUN2(long * data)
{
    FUN5(data);
}
void FUN1(long * data);
void FUN5(long * data)
{
    FUN1(data);
}
void FUN0(long * data)
{
    printLongLine(data[0]);
    free(data);
}
