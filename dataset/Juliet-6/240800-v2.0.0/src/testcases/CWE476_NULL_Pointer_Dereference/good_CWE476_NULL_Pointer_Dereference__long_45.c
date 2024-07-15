static long * VAR0;
static long * VAR1;
static long * VAR2;
void FUN0()
{
    long * data = VAR1;
    printLongLine(*data);
}
void FUN1()
{
    long * data;
    long tmpData = 5L;
    {
        data = &tmpData;
    }
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    long * data = VAR2;
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
    data = NULL;
    VAR2 = data;
    FUN2();
}
