void FUN0()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    {
<START>
        data--;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
