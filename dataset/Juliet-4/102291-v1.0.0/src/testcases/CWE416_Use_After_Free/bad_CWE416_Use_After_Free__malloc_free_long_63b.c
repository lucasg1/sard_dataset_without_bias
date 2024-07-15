void FUN0(long * * dataPtr);
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5L;
        }
    }
    free(data);
    FUN0(&data);
}
void FUN0(long * * dataPtr)
{
    long * data = *dataPtr;
<START>
    printLongLine(data[0]);
<END>
}
