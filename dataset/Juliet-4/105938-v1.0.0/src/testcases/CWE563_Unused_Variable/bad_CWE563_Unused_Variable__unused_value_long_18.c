void FUN0()
{
    long data;
    goto source;
source:
    data = 5L;
    goto sink;
sink:
<START>
    data = 10L;
<END>
    printLongLine(data);
}
