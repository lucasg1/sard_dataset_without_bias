void FUN0(long * * data);
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    FUN0(&data);
}
void FUN0(long * * dataPtr)
{
    long * data = *dataPtr;
    if (data != NULL)
    {
        data[0] = 5L;
        printLongLine(data[0]);
        free(data);
    }
}
