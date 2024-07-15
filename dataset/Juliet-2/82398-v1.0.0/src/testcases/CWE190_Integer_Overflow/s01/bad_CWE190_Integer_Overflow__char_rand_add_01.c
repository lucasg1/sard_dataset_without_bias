void FUN0()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    {
<START>
        char result = data + 1;
<END>
        printHexCharLine(result);
    }
}
