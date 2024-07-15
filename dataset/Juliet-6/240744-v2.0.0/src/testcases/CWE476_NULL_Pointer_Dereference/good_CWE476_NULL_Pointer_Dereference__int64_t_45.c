static int64_t * VAR0;
static int64_t * VAR1;
static int64_t * VAR2;
void FUN0()
{
    int64_t * data = VAR1;
    printLongLongLine(*data);
}
void FUN1()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    {
        data = &tmpData;
    }
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    int64_t * data = VAR2;
    if (data != NULL)
    {
        printLongLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    VAR2 = data;
    FUN2();
}
