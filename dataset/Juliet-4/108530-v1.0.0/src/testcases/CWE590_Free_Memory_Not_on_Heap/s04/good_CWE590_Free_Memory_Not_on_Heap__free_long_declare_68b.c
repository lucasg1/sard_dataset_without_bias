long * VAR0;
long * VAR1;
void FUN0();
void FUN1()
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
    VAR1 = data;
    FUN0();
}
extern long * VAR0;
extern long * VAR1;
void FUN0()
{
    long * data = VAR1;
    printLongLine(data[0]);
    free(data);
}
