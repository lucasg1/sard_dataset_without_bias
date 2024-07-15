void FUN0(int64_t data);
void FUN1(int64_t data)
{
    FUN0(data);
}
void FUN2(int64_t data);
void FUN3(int64_t data)
{
    FUN2(data);
}
void FUN4(int64_t data);
void FUN0(int64_t data)
{
    FUN4(data);
}
void FUN6(int64_t data);
void FUN2(int64_t data)
{
    FUN6(data);
}
void FUN8(int64_t data);
void FUN4(int64_t data)
{
    FUN8(data);
}
void FUN10(int64_t data);
void FUN6(int64_t data)
{
    FUN10(data);
}
void FUN1(int64_t data);
void FUN13()
{
    int64_t data;
    data = 0LL;
    data = 2;
    FUN1(data);
}
void FUN3(int64_t data);
void FUN15()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    FUN3(data);
}
void FUN8(int64_t data)
{
    {
        data++;
        int64_t result = data;
        printLongLongLine(result);
    }
}
void FUN10(int64_t data)
{
    if (data < LLONG_MAX)
    {
        data++;
        int64_t result = data;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
