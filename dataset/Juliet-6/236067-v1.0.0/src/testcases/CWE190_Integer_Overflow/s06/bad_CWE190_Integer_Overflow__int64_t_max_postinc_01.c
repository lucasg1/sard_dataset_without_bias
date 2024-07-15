void FUN0()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    {
<START>
        data++;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
