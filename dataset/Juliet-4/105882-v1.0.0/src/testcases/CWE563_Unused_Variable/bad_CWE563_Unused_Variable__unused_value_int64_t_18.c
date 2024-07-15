void FUN0()
{
    int64_t data;
    goto source;
source:
    data = 5LL;
    goto sink;
sink:
<START>
    data = 10LL;
<END>
    printLongLongLine(data);
}
