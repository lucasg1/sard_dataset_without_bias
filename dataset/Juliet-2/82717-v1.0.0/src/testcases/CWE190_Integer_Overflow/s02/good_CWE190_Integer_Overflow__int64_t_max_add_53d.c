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
void FUN5()
{
    int64_t data;
    data = 0LL;
    data = 2;
    FUN4(data);
}
void FUN6(int64_t data);
void FUN7()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    FUN6(data);
}
void FUN1(int64_t data);
void FUN4(int64_t data)
{
    FUN1(data);
}
void FUN3(int64_t data);
void FUN6(int64_t data)
{
    FUN3(data);
}
void FUN0(int64_t data)
{
    {
        int64_t result = data + 1;
        printLongLongLine(result);
    }
}
void FUN2(int64_t data)
{
    if (data < LLONG_MAX)
    {
        int64_t result = data + 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
