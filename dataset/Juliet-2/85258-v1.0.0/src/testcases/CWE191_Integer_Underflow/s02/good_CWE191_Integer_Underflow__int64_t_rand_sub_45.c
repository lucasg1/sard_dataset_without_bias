static int64_t VAR0;
static int64_t VAR1;
static int64_t VAR2;
void FUN0()
{
    int64_t data = VAR1;
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = -2;
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    int64_t data = VAR2;
    if (data > LLONG_MIN)
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    VAR2 = data;
    FUN2();
}
