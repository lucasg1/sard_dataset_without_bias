void FUN0()
{
    long * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
<START>
    printLongLine(*data);
<END>
}
