void FUN0(int64_t data);
void FUN1(int64_t data)
{
    FUN0(data);
}
void FUN2(int64_t data);
void FUN0(int64_t data)
{
    FUN2(data);
}
void FUN4(int64_t data);
void FUN2(int64_t data)
{
    FUN4(data);
}
void FUN1(int64_t data);
void FUN7()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    FUN1(data);
}
void FUN4(int64_t data)
{
    {
<START>
        int64_t result = data + 1;
<END>
        printLongLongLine(result);
    }
}
