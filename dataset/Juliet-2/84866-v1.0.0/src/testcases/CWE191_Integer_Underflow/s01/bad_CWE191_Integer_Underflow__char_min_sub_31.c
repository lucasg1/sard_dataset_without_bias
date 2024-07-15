void FUN0()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    {
        char dataCopy = data;
        char data = dataCopy;
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
