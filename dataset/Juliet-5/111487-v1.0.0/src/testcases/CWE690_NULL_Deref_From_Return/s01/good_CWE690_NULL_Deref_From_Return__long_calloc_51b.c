void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    FUN0(data);
}
void FUN0(long * data)
{
    if (data != NULL)
    {
        data[0] = 5L;
        printLongLine(data[0]);
        free(data);
    }
}
