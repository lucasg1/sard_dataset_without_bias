void FUN0()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MIN;
    {
        int64_t dataCopy = data;
        int64_t data = dataCopy;
        {
<START>
            data--;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
