void FUN0(int64_t data);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    FUN0(data);
}
void FUN0(int64_t data)
{
    {
<START>
        ++data;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
