void FUN0()
{
    char * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
<START>
    printHexCharLine(data[0]);
<END>
}
