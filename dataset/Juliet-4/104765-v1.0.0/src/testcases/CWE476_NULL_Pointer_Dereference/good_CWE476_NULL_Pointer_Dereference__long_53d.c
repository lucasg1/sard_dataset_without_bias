void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
void FUN2(long * data);
void FUN3(long * data)
{
    FUN2(data);
}
void FUN1(long * data);
void FUN5(long * data)
{
    FUN1(data);
}
void FUN3(long * data);
void FUN7(long * data)
{
    FUN3(data);
}
void FUN5(long * data);
void FUN9()
{
    long * data;
    {
        long tmpData = 5L;
        data = &tmpData;
    }
    FUN5(data);
}
void FUN7(long * data);
void FUN11()
{
    long * data;
    data = NULL;
    FUN7(data);
}
void FUN0(long * data)
{
    printLongLine(*data);
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
