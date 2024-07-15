void FUN0()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    data = LLONG_MAX;
    goto sink;
sink:
    {
<START>
        ++data;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
