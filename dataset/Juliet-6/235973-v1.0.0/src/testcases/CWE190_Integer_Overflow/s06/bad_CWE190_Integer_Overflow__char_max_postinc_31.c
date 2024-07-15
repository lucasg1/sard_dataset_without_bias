void FUN0()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    {
        char dataCopy = data;
        char data = dataCopy;
        {
<START>
            data++;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
