void FUN0(long * data)
{
    if (data != NULL)
    {
        data[0] = 5L;
        printLongLine(data[0]);
        free(data);
    }
}
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    funcPtr(data);
}
