void FUN0()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    {
<START>
        ++data;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
