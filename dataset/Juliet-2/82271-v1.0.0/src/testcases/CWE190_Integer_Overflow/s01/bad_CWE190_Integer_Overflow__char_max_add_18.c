void FUN0()
{
    char data;
    data = ' ';
    goto source;
source:
    data = CHAR_MAX;
    goto sink;
sink:
    {
<START>
        char result = data + 1;
<END>
        printHexCharLine(result);
    }
}
