void FUN0(long * data)
{
    printLongLine(*data);
}
void FUN1()
{
    long * data;
    long tmpData = 5L;
    void (*funcPtr) (long *) = FUN0;
    {
        data = &tmpData;
    }
    funcPtr(data);
}
void FUN2(long * data)
{
    if (data != NULL)
    {
        printLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN3()
{
    long * data;
    void (*funcPtr) (long *) = FUN2;
    data = NULL;
    funcPtr(data);
}
