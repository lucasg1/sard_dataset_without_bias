void FUN0()
{
    char data;
    data = ' ';
    goto source;
source:
    data = (char)RAND32();
    goto sink;
sink:
    {
<START>
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}
