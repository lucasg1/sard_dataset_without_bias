int64_t FUN0(int64_t data)
{
    data = LLONG_MAX;
    return data;
}
int64_t FUN0(int64_t data);
void FUN2()
{
    int64_t data;
    data = 0LL;
    data = FUN0(data);
    {
<START>
        int64_t result = data + 1;
<END>
        printLongLongLine(result);
    }
}
