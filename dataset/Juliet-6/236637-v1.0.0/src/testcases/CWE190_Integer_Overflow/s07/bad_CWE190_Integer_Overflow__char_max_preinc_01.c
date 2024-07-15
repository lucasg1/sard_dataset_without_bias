void FUN0()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    {
<START>
        ++data;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
