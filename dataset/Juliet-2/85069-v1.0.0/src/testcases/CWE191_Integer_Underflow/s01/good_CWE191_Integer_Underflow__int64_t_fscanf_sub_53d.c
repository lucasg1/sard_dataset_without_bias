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
void FUN1(int64_t data);
void FUN5()
{
    int64_t data;
    data = 0LL;
    data = -2;
    FUN1(data);
}
void FUN3(int64_t data);
void FUN7()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    FUN3(data);
}
void FUN9(int64_t data);
void FUN0(int64_t data)
{
    FUN9(data);
}
void FUN11(int64_t data);
void FUN2(int64_t data)
{
    FUN11(data);
}
void FUN9(int64_t data)
{
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}
void FUN11(int64_t data)
{
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
