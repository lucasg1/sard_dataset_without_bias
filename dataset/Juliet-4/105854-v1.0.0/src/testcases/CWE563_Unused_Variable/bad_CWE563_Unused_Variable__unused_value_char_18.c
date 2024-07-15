void FUN0()
{
    char data;
    goto source;
source:
    data = 'C';
    goto sink;
sink:
<START>
    data = 'Z';
<END>
    printHexCharLine(data);
}
