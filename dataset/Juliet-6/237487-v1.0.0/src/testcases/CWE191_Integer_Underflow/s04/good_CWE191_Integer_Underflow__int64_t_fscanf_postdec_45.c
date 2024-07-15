static int64_t VAR0;
static int64_t VAR1;
static int64_t VAR2;
void FUN0()
{
    int64_t data = VAR1;
    {
        data--;
        int64_t result = data;
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
        data--;
        int64_t result = data;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    VAR2 = data;
    FUN2();
}
