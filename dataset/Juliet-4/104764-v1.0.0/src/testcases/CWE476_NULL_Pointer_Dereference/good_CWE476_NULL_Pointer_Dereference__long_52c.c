void FUN0(long * data);
void FUN1()
{
    long * data;
    {
        long tmpData = 5L;
        data = &tmpData;
    }
    FUN0(data);
}
void FUN2(long * data);
void FUN3()
{
    long * data;
    data = NULL;
    FUN2(data);
}
void FUN5(long * data);
void FUN0(long * data)
{
    FUN5(data);
}
void FUN7(long * data);
void FUN2(long * data)
{
    FUN7(data);
}
void FUN5(long * data)
{
    printLongLine(*data);
}
void FUN7(long * data)
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
