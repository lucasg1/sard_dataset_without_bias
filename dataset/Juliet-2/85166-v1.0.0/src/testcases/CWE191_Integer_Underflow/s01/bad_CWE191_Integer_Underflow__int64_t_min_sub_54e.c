void FUN0(int64_t data);
void FUN1(int64_t data)
{
    FUN0(data);
}
void FUN1(int64_t data);
void FUN3()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MIN;
    FUN1(data);
}
void FUN4(int64_t data);
void FUN5(int64_t data)
{
    FUN4(data);
}
void FUN5(int64_t data);
void FUN0(int64_t data)
{
    FUN5(data);
}
void FUN4(int64_t data)
{
    {
<START>
        int64_t result = data - 1;
<END>
        printLongLongLine(result);
    }
}
