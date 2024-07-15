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
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
