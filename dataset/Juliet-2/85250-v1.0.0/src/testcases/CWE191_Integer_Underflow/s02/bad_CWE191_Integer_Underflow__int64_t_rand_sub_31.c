void FUN0()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    {
        int64_t dataCopy = data;
        int64_t data = dataCopy;
        {
<START>
            int64_t result = data - 1;
<END>
            printLongLongLine(result);
        }
    }
}
