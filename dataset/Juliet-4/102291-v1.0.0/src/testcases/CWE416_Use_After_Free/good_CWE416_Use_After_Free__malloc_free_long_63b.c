void FUN0(long * * data);
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
    FUN0(&data);
}
void FUN2(long * * data);
void FUN3()
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
    FUN2(&data);
}
void FUN0(long * * dataPtr)
{
    long * data = *dataPtr;
    printLongLine(data[0]);
}
void FUN2(long * * dataPtr)
{
    long * data = *dataPtr;
    ; 
}
