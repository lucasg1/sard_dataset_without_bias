void FUN0()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    data = LLONG_MIN;
    goto sink;
sink:
    {
<START>
        int64_t result = data - 1;
<END>
        printLongLongLine(result);
    }
}
