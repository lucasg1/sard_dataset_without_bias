void FUN0()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    data = (int64_t)RAND64();
    goto sink;
sink:
    {
<START>
        data++;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
