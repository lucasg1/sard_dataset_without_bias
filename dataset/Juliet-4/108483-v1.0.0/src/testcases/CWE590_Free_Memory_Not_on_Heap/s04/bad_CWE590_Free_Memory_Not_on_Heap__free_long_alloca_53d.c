void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
void FUN2(long * data);
void FUN0(long * data)
{
    FUN2(data);
}
void FUN1(long * data);
void FUN5()
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
    FUN1(data);
}
void FUN2(long * data)
{
    printLongLine(data[0]);
<START>
    free(data);
<END>
}
