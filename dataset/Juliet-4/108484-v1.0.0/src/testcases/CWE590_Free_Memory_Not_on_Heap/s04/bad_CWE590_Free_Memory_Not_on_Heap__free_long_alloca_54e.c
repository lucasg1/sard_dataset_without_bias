void FUN0(long * data);
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
    FUN0(data);
}
void FUN2(long * data);
void FUN3(long * data)
{
    FUN2(data);
}
void FUN3(long * data);
void FUN0(long * data)
{
    FUN3(data);
}
void FUN6(long * data);
void FUN2(long * data)
{
    FUN6(data);
}
void FUN6(long * data)
{
    printLongLine(data[0]);
<START>
    free(data);
<END>
}
