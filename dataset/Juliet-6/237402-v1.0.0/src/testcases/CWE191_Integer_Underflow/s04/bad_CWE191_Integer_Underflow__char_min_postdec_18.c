void FUN0()
{
    char data;
    data = ' ';
    goto source;
source:
    data = CHAR_MIN;
    goto sink;
sink:
    {
<START>
        data--;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
