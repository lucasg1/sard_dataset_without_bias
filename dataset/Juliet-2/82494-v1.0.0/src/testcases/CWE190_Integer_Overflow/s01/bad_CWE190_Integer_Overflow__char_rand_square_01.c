void FUN0()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    {
<START>
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}
