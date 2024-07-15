void FUN0()
{
    int64_t * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
<START>
    printLongLongLine(*data);
<END>
}
